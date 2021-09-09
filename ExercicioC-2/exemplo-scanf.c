/*
 ============================================================================
 Name        : exemplo-scanf.c
 Author      : lincoln
 Version     :
 Copyright   : Your copyright notice
 Description : Exemplo de uso do scanf.
 ============================================================================
 */
#include <stdio.h>

int main(){
    int resposta;

    printf("Digite a resposta: ");
    scanf("%d", &resposta);
    printf("A resposta eh %d.\n", resposta);

    return 0;
}
