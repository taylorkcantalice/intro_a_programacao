/*
 ============================================================================
 Name        : latasDeTinta.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : Programa para calcular a quantidade de latas de tinta necessárias para se pintar uma parede.
 ============================================================================
 */

#include <stdio.h>

int main(void){

        float altura, comprimento, rendimento, litrosDeLata, quantidadeDeLatas;

            printf("Olah! Vamos descobrir agora a quantidade de latas de tinta necessarias para pintar a sua parede. \n");
            printf("\n");

                printf("Primeiro, eu vou precisar que voce me especifique alguns detalhes: \n");
                printf("Qual eh a altura da parede, em metros?");
                scanf("%f", &altura);
                printf("Qual eh o comprimento da parede, em metros?");
                scanf("%f", &comprimento);
                printf("Qual eh o rendimento da lata de tinta, em metros quadrado por litro?");
                scanf("%f", &rendimento);
                printf("E por fim, quantos litros tem a lata de tinta?");
                scanf("%f", &litrosDeLata);
                printf("\n");

                    quantidadeDeLatas = (altura*comprimento)/(rendimento*litrosDeLata);
                    printf("A quantidade de latas de tinta necessarias eh de %0.1f unidade(s)", quantidadeDeLatas);
                    printf("\n");

    return 0;
}
