/*
 ============================================================================
 Name        : ExercicioC-3 - questao7.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa que se permutar o valor de duas variáveis.
 ============================================================================
 */
 #include <stdio.h>

int main(void){
    int a, b;
    int x;

	/* a entrada de dados nao pode ser alterada */
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

	/* esse printf nao pode ser alterado nem removido. */
    printf("\nOs valores lidos para a e b foram: %d e %d\n", a, b);

        x = a;
        a = b;
        b = x;

	/* esse printf nao pode ser alterado nem removido e nada pode ser alterado apos ele. */
    printf("\nOs novos valores de a e b sao: %d e %d\n", a, b);

    return 0;
}
