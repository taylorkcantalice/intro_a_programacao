/*
 ============================================================================
 Name        : ExercicioC-7 - questao7.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : Programa em C que solicita ao usuário a entrada de um número
               natural n e informa se esse n é primo ou não.
 ============================================================================
 */

 #include <stdio.h>

int main(void){
    int n, i, contador;

    printf("Digite o valor de um numero natural: ");
    scanf("%d", &n);

    contador = 0;
    for (i = 1; i <= n; i = i + 1){
        if (n % i == 0){
            contador = contador + 1;
        }
    }

    if (contador == 2){
        printf("%d eh primo\n", n);
    } else {
        printf("%d nao eh primo\n", n);
    }


 return 0;
}
