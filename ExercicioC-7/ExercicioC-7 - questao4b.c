/*
 ============================================================================
 Name        : ExercicioC-7 - questao4b.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : Jogo da Adivinhação - Usando while
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, soma;

	srand(time(NULL));
	correto = rand() % 100;
    soma = 0;

	palpite = -1;
	while (palpite != correto) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);

            if (palpite > correto){
                puts("Palpite alto!");
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
            }

        soma = soma + 1;
	}

    puts("Voce acertou!");
    printf("Quantidade de palpites feitos: %d\n", soma);

	return 0;
}
