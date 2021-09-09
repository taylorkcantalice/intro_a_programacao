/*
 ============================================================================
 Name        : ExercicioC-7 - questao1c.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : Programa que imprime todos os números inteiros de -10 a 10,
               com for.
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int n;

    for(n = -10; n <= 10; n = n + 1){
        printf("%d\n", n);
    }

 return 0;
}
