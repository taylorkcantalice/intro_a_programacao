#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto;

	srand(time(NULL));
	correto = rand() % 100;


	do {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);

            if (palpite > correto){
                puts("Palpite alto!");
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
            }
	}while (palpite != correto);

    puts("Voce acertou!");
	return 0;
}

