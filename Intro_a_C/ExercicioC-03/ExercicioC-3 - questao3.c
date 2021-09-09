/*
 ============================================================================
 Name        : ExercicioC-3 - questao3.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa para calcular a área de um triângulo.
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int base, altura;
    float area;

        printf("Digite o valor da base do triangulo: ");
        scanf("%d", &base);
        printf("Digite o valor da altura do triangulo: ");
        scanf("%d", &altura);
        printf(" ");

        area = (base*altura)/2.0;
        printf("A area do triangulo de base %d e de altura %d eh: %.1f \n", base, altura, area);

    return 0;
}
