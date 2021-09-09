/*
 ============================================================================
 Name        : ExercicioC-6 - questao3.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa em C que faça a leitura de dois valores inteiros e
               imprima todos os números do intervalo fechado entre esses dois
               números (incluindo os próprios números lidos) em ordem
               crescente.
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int numero1, numero2;
    int x;

    printf("Digite um valor para determinar o intervalo fechado entre dois numeros: ");
    scanf("%d", &numero1);
    printf("Digite o outro valor do intervalo fechado entre dois numeros: ");
    scanf("%d", &numero2);

    if (numero1 > numero2){
        x = numero1;
        numero1 = numero2;
        numero2 = x;
    }

    while (numero1 <= numero2) {
        printf("%d\n", numero1);
        numero1 = numero1 + 1;
    }

 return 0;
}
