/**
 ============================================================================
 Nome      : ExercicioC-11 - questao1.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Programa em C para calcular a área e o perímetro de um hexágono.
 ============================================================================
 */

#include <stdio.h>

/****
* CalculaHexagono(): Calcula a área e o perímetro de um hexágono.
*
* Parâmetros:
*   l(entrada): O valor referente ao lado do hexágono;
*   *area(saída): indica o endereço onde está armazenado a variável area do
*   tipo float, ou seja é um ponteiro para float;
*   *perimetro(saída): indica o endereço onde está armazenado a variável
*   perimetro do tipo float, dessa forma, represenando um ponteiro para float.
*
* Retorno: A função retorna a área e o perímetro do hexágono.
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
