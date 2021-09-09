/*
 ============================================================================
 Name        : ExercicioC-6 - questao5.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa que leia uma quantidade indefinida de valores
               inteiros da entrada até que seja digitado o valor zero. Antes
               de encerrar o programa deve informar quais foram o menor e o
               maior valor digitado, sem contar o zero.
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int num, numMaior, numMenor;

    num = 100000;
    numMaior = -100;
    numMenor = 100;

    while(num != 0){
        printf("Digite um valor: ");
        scanf("%d", &num);

        if (num > numMaior && num != 0){
            numMaior = num;
        }
        if (num < numMenor && num != 0){
            numMenor = num;
        }
    }

    printf("O maior numero digitado: %d\n", numMaior);
    printf("O menor numero digitado: %d\n", numMenor);

 return 0;
}
