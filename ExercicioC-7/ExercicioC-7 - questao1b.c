/*
 ============================================================================
 Name        : ExercicioC-7 - questao1b.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : Programa que imprime todos os números inteiros de -10 a 10,
               com do-while.
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int n;

    n = -10;

    do {
        printf("%d\n", n);
        n = n + 1;
    } while (n <= 10);

 return 0;
}
