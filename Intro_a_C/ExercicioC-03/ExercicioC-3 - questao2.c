/*
 ============================================================================
 Name        : ExercicioC-3 - questao2.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa para se calcular o Índice de Massa Corporal (IMC).
 ============================================================================
 */

#include <stdio.h>

int main(void){
    float peso, altura;
    float imc;

        printf("Digite o valor do seu peso em quilogramas: ");
        scanf("%f", &peso);
        printf("Digite o valor da sua altura em metros: ");
        scanf("%f", &altura);
        printf("\n");

        imc = peso/(altura*altura);
        printf("Pronto, o seu Indice de Massa Corporal e: %f\n", imc);

    return 0;
}
