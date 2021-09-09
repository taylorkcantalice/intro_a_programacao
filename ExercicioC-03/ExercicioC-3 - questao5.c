/*
 ============================================================================
 Name        : ExercicioC-3 - questao5.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa para calcular e exibir quantas cédulas de 100, 50,
               20, 10, 5, 2 e 1 (in memoriam) são necessárias para compor
               um determinado valor.
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int valor, quant, resto;

    printf("Digite o valor R$: ");
    scanf("%d", &valor);

    quant = valor / 100;
    resto = valor % 100;
    printf("%d notas de R$100.00\n", quant);

    valor = resto;
    quant = valor / 50;
    resto = valor % 50;
    printf("%d notas de R$50.00\n", quant);

    valor = resto;
    quant = valor / 20;
    resto = valor % 20;
    printf("%d notas de R$20.00\n", quant);

    valor = resto;
    quant = valor / 10;
    resto = valor % 10;
    printf("%d notas de R$10.00\n", quant);

    valor = resto;
    quant = valor / 5;
    resto = valor % 5;
    printf("%d notas de R$5.00\n", quant);

    valor = resto;
    quant = valor / 2;
    resto = valor % 2;
    printf("%d notas de R$2.00\n", quant);

    valor = resto;
    quant = valor / 1;
    resto = valor % 1;
    printf("%d notas de R$1.00\n", quant);

    return 0;
}
