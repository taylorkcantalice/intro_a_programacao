/*
 ============================================================================
 Name        : ExercicioC-4 - questao5.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa em C para calcular as raízes de uma equação do
               segundo grau.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main(void){
    float a, b, c;
    float delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    printf("\n");

    delta = b*b - 4*a*c;
    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;

    if (a == 0) {
        puts("O valor de a precisa ser diferente de 0 para a equacao de segundo grau existir\n");
        return 1;
    } else {
        if (delta < 0) {
            puts("O valor de delta precisa ser maior do que ou igual a 0 para a equacao de segundo grau existir\n");
            return 2;
        } else {
            if (delta > 0){
                printf("O valor de delta eh maior que 0, entao a equacao possui duas raizes distintas iguais a: x1 = %.1f e x2 = %.1f\n", x1, x2);
            } else {
                printf("O valor de delta eh igual a 0, entao a equacao possui raizes iguais a: %.1f\n", x1);
            }
        }
    }


    return 0;
}
