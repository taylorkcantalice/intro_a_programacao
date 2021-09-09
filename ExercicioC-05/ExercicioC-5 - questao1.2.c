/*
 ============================================================================
 Name        : ExercicioC-5 - questao1.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.2
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

    if (idade < 15) {
        printf ("Crianca\n");
    } else if (idade < 30) {
        printf("Jovem\n");
    } else if (idade < 60) {
        printf("Adulto\n");
    } else {
            printf("Velho\n");
    }

    return 0;
}
