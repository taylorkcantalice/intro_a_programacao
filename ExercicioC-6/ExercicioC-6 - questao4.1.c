/*
 ============================================================================
 Name        : ExercicioC-6 - questao4.1.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.1
 Copyright   : Your copyright notice
 Description : Programa que calcule e exiba a média de um conjunto de valores
               inteiros lidos da entrada. O tamanho do conjunto de valores é
               indefinido e o programa deve terminar de ler novos valores
               apenas quando o valor zero for lido.
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int valor, soma, contador;
    float media;

    valor = 1;
    contador = 0;
    media = 0;

    while (valor != 0) {
        printf("Digite o valor: ");
        scanf("%d", &valor);
        if (valor != 0){
            soma = soma + valor;
            contador = contador + 1;
        }
    }

    media = soma/contador;
    printf("A media dos valores digitados: %.1f", media);

 return 0;
}
