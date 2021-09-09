/*
 ============================================================================
 Name        : ExercicioC-5 - questao2.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa em C, que calcula o IMC e exibe a classificação dessa
               pessoa segundo a tabela do IMC.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main(void){
    float peso, altura;
    float imc;

    printf("Digite o valor do seu peso, em quilogramas: ");
    scanf("%f", &peso);
    printf("Digite o valor da sua altura, em metros: ");
    scanf("%f", &altura);

    imc = peso/pow(altura, 2);
    printf("IMC: %.2f\n", imc);

    if (imc <= 18.5) {
        printf("Baixo Peso\n");
    } else if (18.5 < imc && imc <= 25) {
        printf("Normal\n");
    } else if (25 < imc && imc <= 30) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    return 0;
}
