/**
 ============================================================================
 Nome      : ExercicioC-14 - questao1.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Program em C, para o cadastro de discentes
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NOME_ALUNO 41
#define MAX_CARACTER 51
#define MAX_ALUNOS 30

/*
 * Array de Estruturas 'tDiscentes'
 */
typedef struct{
    int matricula_Discente;
    char nome_Discente[MAX_NOME_ALUNO];
    double nota1, nota2, nota3;
    double nota_de_recuperacao_Discente;
} tDiscente;

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

int main(void){
    int i;
    char disciplina[MAX_CARACTER];
    int num_Discentes;

    printf("\t------------------------- SEJA BEM VINDO! -------------------------\n");
    printf("\tEsse programa lhe auxiliara no controle das notas da sua disciplina\n");
    printf("\t-------------------------------------------------------------------");
    printf("\n\nVamos comecar?\n");

    printf("\n\t--------------------- CADASTRO DA DISCIPLINA ---------------------\n");
    printf("\nEm primeiro lugar, digite o nome da disciplina (max %d caracteres)\n", MAX_CARACTER-1);
    printf("\tNOME DA DISCIPLINA: ");
    fgets(disciplina, MAX_CARACTER, stdin);
    RemoveBarraN(disciplina);
    printf("\nAgora, digite o numero de alunos na disciplina de %s (max %d alunos)\n", disciplina, MAX_ALUNOS);
    printf("\tNUMERO DE ALUNOS: ");
    scanf("%d%*c", &num_Discentes);
    printf("\t==================================================================\n");

    tDiscente discente[num_Discentes];

    printf("\n\t------------------------ CADASTRO DISCENTE ------------------------\n");
    printf("\nDando continuidade, vamos cadastrar os %d discentes...\n", num_Discentes);
    for(i = 0; i < num_Discentes; i++){
        printf("\nDigite a matricula e o nome do #%d discente\n", i+1);
        printf("\tMATRICULA: ");
        scanf("%d%*c", &discente[i].matricula_Discente);
        printf("\tNOME (max %d caracteres): ", MAX_NOME_ALUNO-1);
        fgets(discente[i].nome_Discente, MAX_NOME_ALUNO, stdin);
        RemoveBarraN(discente[i].nome_Discente);
    } // End For
    printf("\t===================================================================\n");

    printf("\n\t------------------------- CADASTRO NOTAS -------------------------\n");
    printf("\nAgora, vamos cadastrar as 3 notas dos %d discentes...\n", num_Discentes);
    for(i = 0; i < num_Discentes; i++){
        printf("\nCadastro de notas do discente %s (matricula: %d):\n", discente[i].nome_Discente, discente[i].matricula_Discente);
        /* NOTA 1*/
        printf("\tDigite a #1 NOTA: ");
        scanf("%lf%*c", &discente[i].nota1);
        /* NOTA 2*/
        printf("\tDigite a #2 NOTA: ");
        scanf("%lf%*c", &discente[i].nota2);
        /* NOTA 3*/
        printf("\tDigite a #3 NOTA: ");
        scanf("%lf%*c", &discente[i].nota3);
    } // End For
    printf("\t==================================================================\n");


    for(i = 0; i < num_Discentes; i++){
        if(MediaInicial(discente[i]) >= 4 && MediaInicial(discente[i]) < 7){
            printf("\nQual a NOTA DE RECUPERACAO do discente %s (MEDIA ATUAL = %.1lf): ", discente[i].nome_Discente, MediaInicial(discente[i]));
            scanf("%lf", &discente[i].nota_de_recuperacao_Discente);
        }
    }

    printf("\n\t=========================================================================================\n");
    printf("\tDISCIPLINA: %s", disciplina);
    printf("\n\t=========================================================================================\n");
    printf("\tMATRICULA\tNOME\t\tNOTA1\tNOTA2\tNOTA3\tRECUPERACAO\tMEDIA\tSITUACAO");
    printf("\n\t=========================================================================================\n");
    for(i = 0; i < num_Discentes; i++){

        printf("\t6%d", discente[i].matricula_Discente);
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

    return 0;
}
