/**
 ============================================================================
 Nome      : ExercicioC-11 - questao2.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Programa em C que calcula as raízes de uma equação do segundo
             grau.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

/****
* ResolveEquacao2Grau(): Calcula as raízes de uma equação do segundo grau.
*
* Parâmetros:
*   a(entrada): o valor do coeficiente 'a' da equação do segundo grau.
*   b(entrada): o valor do coeficiente 'b' da equação do segundo grau.
*   c(entrada): o valor do coeficiente 'c' da equação do segundo grau.
*   x1(saída): indica o endereço onde está armazenado a variável 'x1' do
*   tipo float, ou seja é um ponteiro para float;
*   x2(saída): indica o endereço onde está armazenado a variável 'x2' do
*   tipo float, dessa forma, represenando um ponteiro para float.
*
* Retorno: A função retorno um valor interiro dependendo dos valores das
*          entradas.
*               0 (zero): caso as raízes tenham sido calculadas corretamente;
*               -1 (menos 1): caso os coeficientes não representem uma equação
*               do segundo grau;
*               -2 (menos 2): caso a equação não possua raízes reais.
****/
int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2){
    if (a <= 0){
        return -1;
    }

    float delta = b*b - 4*a*c;
    if (delta < 0){
        return -2;
    }

    *x1 = (-b + sqrt(delta)) / (2*a);
    *x2 = (-b - sqrt(delta)) / (2*a);

    return 0;
} // End ResolveEquacao2Grau()

int main(void){
    float a, b, c, x1, x2;

    printf("Digite o valor do coeficiente \'a\': ");
    scanf("%f", &a);
    printf("Digite o valor do coeficiente \'b\': ");
    scanf("%f", &b);
    printf("Digite o valor do coeficiente \'c\': ");
    scanf("%f", &c);

    printf("Retorno = %d\n", ResolveEquacao2Grau(a, b, c, &x1, &x2));
    if (!ResolveEquacao2Grau(a, b, c, &x1, &x2)){
        printf("x1 = %f\nx2 = %f\n", x1, x2);
    }

    return 0;
}
