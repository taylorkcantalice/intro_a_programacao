/**
 ============================================================================
 Nome      : ExercicioC-13 - questao1.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 ============================================================================
 */

/**
    Laboratorio de Introducao a Programacao para Engenharia da Computacao.
    Atividade do dia 21 de junho de 2021.

    Descricao:

    Complete esse codigo fonte para criar um programa dirigido por menus que mantem um
    cadastro de um tesouro e sua localizacao.

    O tesouro sera representado por:
      - Uma descricao (dinheiros, chocolate, feriado, ponto extra)
      - Um valor em reais
      - Uma coordenada X
      - Uma coordenada Y

    As funcionalidades do programa sao:
      - Cadastro do tesouro
      - Impressao das informacoes do tesouro cadastrado
      - Informar a distancia do tesouro a partir de um determinado ponto
        inserido pelo usuario

*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

#define MAX_DESCRICAO 51

typedef struct {
    char descricao[MAX_DESCRICAO];
    float valor;
    int x;
    int y;
    }tRegistro;

void ApresentaMensagem() {
    printf("Ola, esse programa ...\n");
}

void ApresentaMenu() {
    printf("\n\n*** Opcoes *** \n"
                "\n1 - Cadastra"
                "\n2 - Imprime"
                "\n3 - Distancia a partir de um ponto"
                "\n5 - Sair\n");
}

tRegistro * CadastroRegistro(tRegistro *reg) {
    //ler do usuario e preencher, use prompts e scanf e preencha a estrutura no parametro

    printf("Descricao (Max de caracter %d): ", MAX_DESCRICAO);
    scanf("%s", reg->descricao);
    printf("Valor: ");
    scanf("%f", &reg->valor);
    printf("Uma coordenada X: ");
    scanf("%d", &reg->x);
    printf("Uma coordenada Y: ");
    scanf("%d", &reg->y);

    return reg;
}

void ImprimeRegistro(const tRegistro *reg) {
    //mostrar as informacoes do registro do parametro de forma organizad
    printf("\tDescricao: %s\n", reg->descricao);
    printf("\tValor: %.2f\n", reg->valor);
    printf("\tPosicao X: %d\n", reg->x);
    printf("\tPosicao Y: %d\n", reg->y);
}

float Distancia(tRegistro reg, int x, int y){
    //funcao q retorna a distancia da coordenada dos parametros ate a coordenada do registro
    float opa = ((x - reg.x)*(x - reg.x)) + ((y - reg.y)*(y - reg.y));
    printf("X = %d, Y = %d\n", x, y);
    printf("regX = %d, regY = %d\n", reg.x, reg.y);
    printf("%f\n", opa);
    return sqrt(opa);
}

int main(void){
    tRegistro reg; //guarda o registro
    int opcao;
    int pontoX, pontoY;
    ApresentaMensagem();

    while(1){
        ApresentaMenu();
        scanf("%d", &opcao);

        if (opcao == 5){
            break;
        }


        switch(opcao){
            case 1:
                CadastroRegistro(&reg);
                break;
            case 2:
                ImprimeRegistro(&reg);
                break;
            case 3:
                printf("Distancia a partir de um ponto X : ");
                scanf("%d", &pontoX);
                printf("Distancia a partir de um ponto Y : ");
                scanf("%d", &pontoY);
                printf("%f\n", Distancia(reg, pontoX, pontoY));
                break;
            default:
                puts("Opcao Invalida\n");
                break;
        }
    }

    puts("Adeus");

    return 0;
}
