/**
 ============================================================================
 Nome      : ExercicioC-11 - questao1.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Programa em C para calcular a �rea e o per�metro de um hex�gono.
 ============================================================================
 */

#include <stdio.h>

/****
* CalculaHexagono(): Calcula a �rea e o per�metro de um hex�gono.
*
* Par�metros:
*   l(entrada): O valor referente ao lado do hex�gono;
*   *area(sa�da): indica o endere�o onde est� armazenado a vari�vel area do
*   tipo float, ou seja � um ponteiro para float;
*   *perimetro(sa�da): indica o endere�o onde est� armazenado a vari�vel
*   perimetro do tipo float, dessa forma, represenando um ponteiro para float.
*
* Retorno: A fun��o retorna a �rea e o per�metro do hex�gono.
****/
void CalculaHexagono(float l, float *area, float *perimetro){
    *area = (3 * l*l * sqrt(3))/2;
    *perimetro = 6 * l;

} // End CalculaHexagono()

int main(void){
    float l, area, perimetro;

    printf("Digite o valor do lado do hexagono: ");
    scanf("%f", &l);

    CalculaHexagono(l, &area, &perimetro);

    printf("Area = %.2f\nPerimetro = %.2f", area, perimetro);

    return 0;
}
