/**
 ============================================================================
 Nome      : ExercicioC-8 - questao1.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : O programa le duas notas e calcula a media com uma funcao.
 ============================================================================
 */
#include <stdio.h>

/****
* A fun��o implementada nesse programa possui um erro, que inviabilizava o
* c�lculo correto da m�dia, devido a escolha do tipo de valor que a fun��o
* produz ser do tipo primitivo inteiro (int), como tamb�m na escolha do
* tipo interiro que a fun��o recebe como valores do par�metro. Como pode
* ser visto a seguir:
*
* int Media(int valor1, int valor2){
*   int soma = valor1 + valor2;
*   return soma / 2;
* }
*
* Ent�o, uma poss�vel corre��o seria substituir o tipo de valor e o valor
* do par�metro pelo float', que armazena n�meros com ponto flutuante
* (reais) com precis�o simples, sendo o ideal para o c�lculo de m�dias.
****/

/****
* Media(): Calcula a media de dois valores.
*
* Parametros:
*    valor1 (entrada): o primeiro valor.
*    valor2 (entrada): o segundo valor.
*
* Retorno: retorna sempre a media dos valores recebidos.
****/
float Media(float valor1, float valor2){
    float soma = valor1 + valor2;
    return soma / 2;
}

int main(void){
    float nota1, nota2; /* os valores a serem lidos do usuario */
    float media;        /* para calcular e guardar o resultado */

    /* leitura dos valores */
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    /* calular a media a partir da chamada da funcao */
    media = Media(nota1, nota2);

    /* imprime o resultado */
    printf("A media das notas %.1f e %.1f eh %.1f\n", nota1, nota2, media);

    return 0;
}
