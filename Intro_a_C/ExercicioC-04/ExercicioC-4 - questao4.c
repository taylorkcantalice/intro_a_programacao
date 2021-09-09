/*
 ============================================================================
 Name        : ExercicioC-4 - questao4.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa em C que leia três inteiros e informe qual deles é o
               valor do maior deles.
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int a, b, c;

    printf("Digite o valor do inteiro a: ");
    scanf("%d", &a);
    printf("Digite o valor do inteiro b: ");
    scanf("%d", &b);
    printf("Digite o valor do inteiro c: ");
    scanf("%d", &c);

    if (a > b) {
        if (a > c) {
            puts("a eh maior que b e c");
        } else {
            puts("c eh maior que a e b");
        }
    } else {
        if (b > c) {
            puts("b eh maior que a e c");
        } else {
            puts("c eh maior que a e b");
        }
    }

    return 0;
}
