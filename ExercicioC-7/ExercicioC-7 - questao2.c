/*
 ============================================================================
 Name        : ExercicioC-7 - questao2.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : Programa que imprima todos os n�meros inteiros do intervalo
               [1, 1000] que terminam com o d�gito 4 e s�o m�ltiplos de 6.
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int i;

   for(i = 1; i <= 1000; i = i + 1){
        if((4 % 10 == i % 10) && (i % 6 == 0)){
            printf("%d\n", i);
        }
   }

 return 0;
}
