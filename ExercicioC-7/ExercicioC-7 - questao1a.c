/*
 ============================================================================
 Name        : ExercicioC-7 - questao1a.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : Programa que imprime todos os números inteiros de -10 a 10,
               com while.
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int n;

    n = -10;

    while (n <= 10){
        printf("%d\n", n);
        n = n + 1;
    }


 return 0;
}
