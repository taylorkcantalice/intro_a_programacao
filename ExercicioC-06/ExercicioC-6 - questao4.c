/*
 ============================================================================
 Name        : ExercicioC-6 - questao4.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa que calcule e exiba a média de um conjunto de valores
               inteiros lidos da entrada. O tamanho do conjunto de valores é
               indefinido e o programa deve terminar de ler novos valores
               apenas quando o valor zero for lido.
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int valor, contador;
    float media, x;

    printf("Digite o valor: ");
    scanf("%d", &valor);
    contador = 0;
    media = 0;

    while (valor != 0) {
        printf("Digite o valor: ");
        media = (media + valor);
        scanf("%d", &valor);
        contador = contador + 1;
        x = media/contador;
    }

    printf("A media dos valores digitados: %.1f", x);

 return 0;
}
