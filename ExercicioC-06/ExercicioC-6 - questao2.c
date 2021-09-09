/*
 ============================================================================
 Name        : ExercicioC-6 - questao2.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa em C que imprime os números inteiros de 10 à 1.
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int n;

    n = 10;

    while (n >= 1) { //while (n != 0)
        printf("%d\n", n);
        n = n - 1;
    }

 return 0;
}
