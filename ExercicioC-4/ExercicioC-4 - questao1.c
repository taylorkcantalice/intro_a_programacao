/*
 ============================================================================
 Name        : ExercicioC-4 - questao1.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa que exibe o menor valor entre duas variáveis.
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    if (a > b){
        puts("b eh menor que a");
    } else {
        puts("a eh menor que b");
    }

    return 0;
}
