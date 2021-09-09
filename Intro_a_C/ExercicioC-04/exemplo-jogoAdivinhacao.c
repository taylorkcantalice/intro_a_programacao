#include <stdio.h>
#include <stdlib.h>

int main(void){
	int palpite;

	puts("Bem-vindo!");

	puts("Adivinhe o numero:");
	scanf("%d", &palpite);

	if (palpite == 5) {
		puts("Voce ganhou!");
	}else {
		puts("Voce perdeu.");
	}

	puts("Fim do jogo.");
	return 0;
}

