/*
 ============================================================================
 Name        : ExercicioC-7 - questao5.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : Jogo da Adivinhação - com 5 palpites permitidos
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, quant;

	srand(time(NULL));
	correto = rand() % 100;
    quant = 0;

	palpite = -1;
	while (palpite != correto) {

        quant = quant + 1;
        if (quant == 6){
            puts("PERDEU\n");
            return 1;
        }

        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);

            if (palpite > correto){
                puts("Palpite alto!");
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
            }
        printf("Tentantiva numero %d\n\n", quant);
	}

    puts("Voce acertou!");

	return 0;
}
