/*
 ============================================================================
 Name        : ExercicioC-4 - questao2.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa que calcula seu peso ideal.
 ============================================================================
 */

#include <stdio.h>

int main(void){
    char s;
    float h, peso;

    printf("Digite e informe o seu sexo, \'H\' para homem ou \'M\' para mulher: ");
    scanf("%c", &s);
    printf("Digite o valor da sua altura: ");
    scanf("%f", &h);

    if (s == 'H') {
        peso = (72.7*h) - 58;
    } else {
        peso = (62.1*h) - 44.7;
    }

    printf("O seu peso ideal eh: %.1f", peso);

    return 0;
}
