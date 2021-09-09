/*
 ============================================================================
 Name        : ExercicioC-5 - questao1.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa em C que leia uma idade e imprima se essa pessoa é
               “Jovem”, “Adulta” ou “Idosa”.
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int idade;

    printf("Digite o valor da sua idade: ");
    scanf("%d", &idade);

    if (idade < 21) {
        printf("Jovem\n");
    } else if (21 <= idade && idade < 60) {
        printf("Adulto\n");
    } else {
        printf("Velho\n");
    }

    return 0;
}
