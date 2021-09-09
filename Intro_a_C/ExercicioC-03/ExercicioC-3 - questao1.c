/*
 ============================================================================
 Name        : ExercicioC-3 - questao1.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa para descobrir o raio, a área, e o perímetro da
               circunferência a partir de um determinado diâmetro de um
               círculo.
 ============================================================================
 */
#include <stdio.h>

int main(void){
    float diametro;
    float raio, area, perimetro;

        printf("Digite o valor do diametro do circulo: ");
        scanf("%f", &diametro);
        printf("\n");

        raio = diametro/2;
        printf("O valor do raio do circulo eh: %0.1f\n", raio);
        area = 3.14*raio*raio;
        printf("O valor da area do circulo eh: %0.2f\n", area);
        perimetro = 2*3.14*raio;
        printf("O valor do perimetro da circunferencia eh: %0.2f\n", perimetro);

    return 0;
}
