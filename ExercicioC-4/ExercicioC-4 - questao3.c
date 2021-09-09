/*
 ============================================================================
 Name        : ExercicioC-4 - questao3.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa em C que leia dois números como entrada e exiba o
               valor do menor deles ou se eles são iguais.
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int a, b;

    printf("Digite o valor inteiro de a: ");
    scanf("%d", &a);
    printf("Digite o valor inteiro de b: ");
    scanf("%d", &b);

    if (a == b) {
        puts("a e b sao iguais");
    } else {
        if (a > b) {
            puts("b eh menor que a");
        } else {
            puts("a eh menor que b");
        }
    }

    return 0;
}
