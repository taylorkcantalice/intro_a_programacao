/*
 ============================================================================
 Name        : ExercicioC-3 - questao6.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa para calcular e exibir um tempo determinado em segundos
               em horas, minutos e segundos.
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int segundos, minutos, horas, resto;

        printf("Digite o tempo em segundos: ");
        scanf("%d", &segundos);

        horas = segundos / 3600;
        resto = segundos % 3600;

        segundos = resto;
        minutos = segundos / 60;
        resto = segundos % 60;

        segundos = resto;

        printf("Eh/Sao %d hora(s), %d minuto(s) e %d segundo(s) \n", horas, minutos, segundos);

    return 0;
}
