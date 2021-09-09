/*
 ============================================================================
 Name        : ExercicioC-6 - questao1.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa em C que imprime os números inteiros de 1 à 10.
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int n;

    n = 1;

    while (n <= 10) { //while (n != 11)
        printf("%d\n", n);
        n = n + 1;
    }

 return 0;
}
