/*
 ============================================================================
 Name        : ExercicioC-7 - questao3.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : Escreva um programa que escreve na tela cem vezes,
               alternadamente, cada frase a seguir:
                � S� aprende a programar quem escreve programas
                � Quem n�o escreve programas n�o aprende a programar
 ============================================================================
 */

 #include <stdio.h>

int main(void){
    int i;

    for(i = 1; i <= 200; i = i + 1){
        if (i % 2 == 0) {
            printf("So aprende a programar quem escreve programas\n");

        }else {
            printf("Quem nao escreve programas nao aprende a programar\n");
        }
    }

 return 0;
}
