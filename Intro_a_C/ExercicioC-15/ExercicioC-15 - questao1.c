/**
 ============================================================================
 Nome      : ExercicioC-15 - questao1.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 2.0
 Descricao : Program em C, para o cadastro de discentes
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NOME_ALUNO 41
#define MAX_CARACTER 51
#define MAX_ALUNOS 30

int num_Discentes = 0;
char disciplina[MAX_CARACTER];

typedef struct{
    int matricula_Discente;
    char nome_Discente[MAX_NOME_ALUNO];
    double nota1, nota2, nota3;
    double nota_de_recuperacao_Discente;
} tDiscente;

tDiscente discente[MAX_ALUNOS];

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

double MediaInicial(tDiscente discente){
    return (discente.nota1 + discente.nota2 + discente.nota3) / 3;
}

double MediaFinal(tDiscente discente){
    return ((6*MediaInicial(discente)) + (4*discente.nota_de_recuperacao_Discente))/10;
}

void CarregarDados(){
    FILE *fp;
    char str[101];

    fp = fopen("notas.txt", "r");
    if (fp == NULL){
        printf("Erro ao criar o arquivo de dados.\n");
        return;
    }

    while(1){
        fgets(str, 101, fp);
        if(feof(fp)){
            break;
        }
        RemoveBarraN(str);
        strcpy(disciplina, str);
        fscanf(fp, "%d%*c", &discente[num_Discentes].matricula_Discente);
        fgets(str, 101, fp);
        if(feof(fp)){
            break;
        }
        RemoveBarraN(str);
        strcpy(discente[num_Discentes].nome_Discente, str);
        fscanf(fp, "%lf %lf %lf %lf%*c", &discente[num_Discentes].nota1, &discente[num_Discentes].nota2,
               &discente[num_Discentes].nota3, &discente[num_Discentes].nota_de_recuperacao_Discente);
        num_Discentes++;
    }

    if (fclose(fp) == 0){
        printf("Dados carregados com sucesso\n");
    }
}

void SalvarDados(){
    int i;
    FILE *fp;

    fp = fopen("notas.txt", "w");
    if (fp == NULL){
        printf("Erro ao criar o arquivo de dados.\n");
        return;
    }

    for (i = 0; i < num_Discentes; i++){
        fprintf(fp, "%s\n%d\n%s\n%lf %lf %lf\n%lf\n", disciplina, discente[i].matricula_Discente, discente[i].nome_Discente,
                discente[i].nota1, discente[i].nota2, discente[i].nota3, discente[i].nota_de_recuperacao_Discente);
    }

    if (fclose(fp) == 0){
        printf("Dados salvos com sucesso\n");
    }
}

void Apresentacao(){
    printf("\t------------------------- SEJA BEM VINDO! -------------------------\n");
    printf("\tEsse programa lhe auxiliara no controle das notas da sua disciplina\n");
    printf("\t-------------------------------------------------------------------");
    printf("\n\nVamos comecar? Escolha uma das opcoes do menu\n");
}

void ExibeMenu(){
    printf("\n------------ MENU ------------\n"
           "1 - Cadastrar Disciplina\n"
           "2 - Cadastrar Discente\n"
           "3 - Cadastrar Notas\n"
           "4 - Consultar Discente\n"
           "5 - Relatorio de Notas\n"
           "6 - Atualizar Notas\n"
           "7 - Relatorio em Arquivo\n"
           "8 - Salvar Dados\n"
           "9 - Carregar Dados\n"
           "10 - Sair\n\n");
}

void CadastrarDisciplina(){
    printf("\n\t--------------------- CADASTRO DA DISCIPLINA ---------------------\n");
    printf("\nDigite o nome da disciplina (max %d caracteres)\n", MAX_CARACTER-1);
    printf("\tNOME DA DISCIPLINA: ");
    fgets(disciplina, MAX_CARACTER, stdin);
    RemoveBarraN(disciplina);
    printf("\t==================================================================\n");
}

void CadastrarDiscente(){
    if (num_Discentes >= MAX_ALUNOS){
        puts("Capacidade de armazenamento cheia.");
        return;
    }

    printf("Insira as seguintes informacoes sobre o #%d discente\n", num_Discentes+1);
    printf("\tMATRICULA: ");
    scanf("%d%*c", &discente[num_Discentes].matricula_Discente);
    printf("\tNOME (max %d caracteres): ", MAX_NOME_ALUNO-1);
    fgets(discente[num_Discentes].nome_Discente, MAX_NOME_ALUNO, stdin);
    RemoveBarraN(discente[num_Discentes].nome_Discente);
    num_Discentes++;
}

void CadastrarNotas(){
    int i;
    double media_Inicial, media_Final;

    for(i = 0; i < num_Discentes; i++){
        printf("Cadastro de notas do discente %s (matricula: %d):\n", discente[i].nome_Discente, discente[i].matricula_Discente);
        // NOTA 1
        printf("\tDigite a #1 NOTA: ");
        scanf("%lf%*c", &discente[i].nota1);
        // NOTA 2
        printf("\tDigite a #2 NOTA: ");
        scanf("%lf%*c", &discente[i].nota2);
        // NOTA 3
        printf("\tDigite a #3 NOTA: ");
        scanf("%lf%*c", &discente[i].nota3);

        if(MediaInicial(discente[i]) >= 4 && MediaInicial(discente[i]) < 7){
            printf("\nQual a NOTA DE RECUPERACAO do discente %s (MEDIA ATUAL = %.1lf): ", discente[i].nome_Discente, MediaInicial(discente[i]));
            scanf("%lf", &discente[i].nota_de_recuperacao_Discente);
        }
    }
}

int ProcurarMatricula(const int *chave){
    int i;

    for(i = 0; i < num_Discentes; i++){
        if(chave == discente[i].matricula_Discente)
            return i;
    }

    return -1;
}

int ProcurarNome(const char *chave){
    int i;

    for(i = 0; i < num_Discentes; i++){
        if(strstr(discente[i].nome_Discente, chave) != NULL)
            return i;
    }

    return -1;
}

void ExibeDiscente(int i){
    printf("Informacoes do discente #%d:\n", i+1);
    printf("\tMatricula: %d\n", discente[i].matricula_Discente);
    printf("\tNome: %s\n", discente[i].nome_Discente);
    printf("\tNota 1: %.1lf\n", discente[i].nota1);
    printf("\tNota 2: %.1lf\n", discente[i].nota2);
    printf("\tNota 2: %.1lf\n", discente[i].nota3);
    if(discente[i].nota_de_recuperacao_Discente != 0){
        printf("\tNota de Recuperacao: %.1lf\n", discente[i].nota_de_recuperacao_Discente);
    }
}

void ConsultarDiscente(int opcao){
    int matricula_chave;
    char nome_chave[MAX_ALUNOS];
    int i;

    if(opcao == 0){
        printf("Digite a chave de pesquisa: ");
        scanf("%d", &matricula_chave);
        i = ProcurarMatricula(matricula_chave);
    } else {
        printf("Digite a chave de pesquisa: ");
        fgets(nome_chave, MAX_ALUNOS, stdin);
        RemoveBarraN(nome_chave);
        i = ProcurarNome(nome_chave);
    }

    if (i >= 0){
        ExibeDiscente(i);
    }else{
        puts("Discente nao encontrade.");
    }
}

void RelatorioDeNotas(){
    int i;

    printf("\n\t=========================================================================================\n");
    printf("\tDISCIPLINA: %s", disciplina);
    printf("\n\t=========================================================================================\n");
    printf("\tMATRICULA\tNOME\t\tNOTA1\tNOTA2\tNOTA3\tRECUPERACAO\tMEDIA\tSITUACAO");
    printf("\n\t=========================================================================================\n");
    for(i = 0; i < num_Discentes; i++){

        printf("\t%06d", discente[i].matricula_Discente);
        printf("\t\t%s", discente[i].nome_Discente);
        printf("\t\t%03.1lf", discente[i].nota1);
        printf("\t%03.1lf", discente[i].nota2);
        printf("\t%03.1lf", discente[i].nota3);
        printf("\t%03.1lf", discente[i].nota_de_recuperacao_Discente);
        if(MediaInicial(discente[i]) >= 4 && MediaInicial(discente[i]) < 7){
            printf("\t\t%03.1lf", MediaFinal(discente[i]));
            if(MediaFinal(discente[i]) >= 5){
                printf("\tAPROVADO\n");
            }else{
                printf("\tREPROVADO\n");
            }
        }else{
            printf("\t\t%03.1lf", MediaInicial(discente[i]));
            if(MediaInicial(discente[i]) >= 7){
                printf("\tAPROVADO\n");
            } else {
                printf("\tREPROVADO\n");
            }
        }
    }
    printf("\n\t=========================================================================================\n");
}

void RelatorioDeArquivo(const char *arq){
    int i;
    FILE *fp;

    fp = fopen(arq, "w");
    if (fp == NULL){
        printf("Erro ao criar o arquivo de relatorio \"%s\".\n", arq);
        return;
    }

    fprintf(fp, "\n\t=========================================================================================\n");
    fprintf(fp, "\tDISCIPLINA: %s", disciplina);
    fprintf(fp, "\n\t=========================================================================================\n");
    fprintf(fp, "\tMATRICULA\tNOME\t\tNOTA1\tNOTA2\tNOTA3\tRECUPERACAO\tMEDIA\tSITUACAO");
    fprintf(fp, "\n\t=========================================================================================\n");
    for(i = 0; i < num_Discentes; i++){

        fprintf(fp, "\t6%d", discente[i].matricula_Discente);
        fprintf(fp, "\t\t%s", discente[i].nome_Discente);
        fprintf(fp, "\t\t%03.1lf", discente[i].nota1);
        fprintf(fp, "\t%03.1lf", discente[i].nota2);
        fprintf(fp, "\t%03.1lf", discente[i].nota3);
        fprintf(fp, "\t%03.1lf", discente[i].nota_de_recuperacao_Discente);
        if(MediaInicial(discente[i]) >= 4 && MediaInicial(discente[i]) < 7){
            fprintf(fp, "\t\t%03.1lf", MediaFinal(discente[i]));
            if(MediaFinal(discente[i]) >= 5){
                fprintf(fp, "\tAPROVADO\n");
            }else{
                fprintf(fp, "\tREPROVADO\n");
            }
        }else{
            fprintf(fp, "\t\t%03.1lf", MediaInicial(discente[i]));
            if(MediaInicial(discente[i]) >= 7){
                fprintf(fp, "\tAPROVADO\n");
            } else {
                fprintf(fp, "\tREPROVADO\n");
            }
        }
    }
    fprintf(fp, "\n\t=========================================================================================\n");

    if (fclose(fp) == 0){
        printf("Relatorio criado no arquivo \"%s\".\n", arq);
    }
}

void AtualizarNota(int opcao){
    int matricula_chave;
    char nome_chave[MAX_ALUNOS];
    int i;

    if(opcao == 0){
        printf("Digite a chave de pesquisa: ");
        scanf("%d", &matricula_chave);
        i = ProcurarMatricula(matricula_chave);
    } else {
        printf("Digite a chave de pesquisa: ");
        fgets(nome_chave, MAX_ALUNOS, stdin);
        RemoveBarraN(nome_chave);
        i = ProcurarNome(nome_chave);
    }

    if (i >= 0){
        ExibeDiscente(i);
    }else{
        puts("Discente nao encontrade.");
        return;
    }

    printf("Digite nova Nota 1: ");
    scanf("%lf", &discente[i].nota1);
    printf("Digite nova Nota 2: ");
    scanf("%lf", &discente[i].nota2);
    printf("Digite nova Nota 2: ");
    scanf("%lf", &discente[i].nota3);
}

void OrdenarNome(){
    int i, trocou;
    tDiscente aux;

    trocou = 1;
    while(trocou){
        trocou = 0;
        for(i = 0; i < num_Discentes-1; i++){
            if (strcmp(discente[i].nome_Discente, discente[i+1].nome_Discente) > 0){
                aux = discente[i];
                discente[i] = discente[i+1];
                discente[i+1] = aux;
                trocou = 1;
            }
        }
    }

}

int main(void){
    int opcao;
    int tipoBusca;
    char arq[31];

    Apresentacao();

    while(1){
        ExibeMenu();
        printf("Digite a opcao: ");
        scanf("%d%*c", &opcao);

        if (opcao == 10)
            break;

        switch(opcao){
            case 1:
                CadastrarDisciplina();
                break;
            case 2:
                CadastrarDiscente();
                break;
            case 3:
                CadastrarNotas();
                break;
            case 4:
                printf("Digite (0) para procurar por matricula ou (1) por nome: ");
                scanf("%d%*c", &tipoBusca);
                ConsultarDiscente(tipoBusca);
                break;
            case 5:
                OrdenarNome();
                RelatorioDeNotas();
                break;
            case 6:
                printf("Digite (0) para procurar por matricula ou (1) por nome: ");
                scanf("%d%*c", &tipoBusca);
                AtualizarNota(tipoBusca);
                break;
            case 7:
                printf("Digite o nome do arquivo para criacao do relatorio: ");
                scanf("%s", arq);
                RelatorioDeArquivo(arq);
                break;
            case 8:
                SalvarDados();
                break;
            case 9:
                CarregarDados();
                break;
            default:
                puts("Opcao invalida.");
        }
    }

    return 0;
}
