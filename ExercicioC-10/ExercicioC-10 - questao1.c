/**
 ============================================================================
 Nome      : ExercicioC-10 - questao1.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Programa em C, que calcula a média atual de 'X' valores.
 ============================================================================
 */

#include <stdio.h>

/****
* AdicioneNaMedia(): Calcula uma média acumulativa de 'n' valores.
*
* Parâmetros:
*   valor(entrada): o valor recebido para calcular a nova média;
*   soma(variável de duração fixa): acumular os valores recebidos;
*   n(variável de duração fixa): acumular a quantidade de 'n' valores.
*
* Retorno: A função retorna a média atual de todos os valores até então recebidos na entrada.
****/
double AdicioneNaMedia(double valor){
    static double soma;
    static int n;
    soma += valor;
    n++;

    return soma/n;

} // End AdicioneNaMedia()

int main(void){
    int nValores, i;
    double valor, media;

    printf("Digite a quantidade de valores a serem analisados: ");
    scanf("%d", &nValores);

    for(i = 1; i <= nValores; i++){
        printf("Digite o #%d valor: ", i);
        scanf("%lf", &valor);

        media = AdicioneNaMedia(valor);

        if (i > 1){
            printf("Media Atual: %.1lf\n", media);
        } // End If
    } // End For

    return 0;
}
