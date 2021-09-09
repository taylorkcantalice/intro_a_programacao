/*
 ============================================================================
 Name        : ExercicioC-3 - questao4.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa para calcular a media ponderada anual de quatro
               medias bimestrais. Com os seguintes pesos o 1o bimestre tem
               peso 1, o 2o bimestre tem peso 2, o 3o bimestre tem peso 3
               e o 4o bimestre tem peso 4.
 ============================================================================
 */

#include <stdio.h>

int main(void){
    float media1, media2, media3, media4;
    float mediaPonderada;

        printf("Digite o valor da media do primeiro bimestre: ");
        scanf("%f", &media1);
        printf("Digite o valor da media do segundo bimestre: ");
        scanf("%f", &media2);
        printf("Digite o valor da media do terceiro bimestre: ");
        scanf("%f", &media3);
        printf("Digite o valor da media do quarto bimestre: ");
        scanf("%f", &media4);
        printf("\n");

        mediaPonderada = (1*(media1)+2*(media2)+3*(media3)+4*(media4))/10;
        printf("O valor da media ponderada anual das quatro medias bimestrais eh: %.1f\n", mediaPonderada);

    return 0;
}
