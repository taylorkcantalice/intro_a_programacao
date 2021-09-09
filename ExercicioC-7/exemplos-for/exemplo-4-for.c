/*
 ============================================================================
 Name        : exemplo-4-for.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int i, n, soma;

    printf("Digite n: ");
    scanf("%d", &n);

    soma = 0;
    for(i = 1; i <= n; i = i + 1){
        soma = soma + i;
    }

    printf("Soma de 1 ate %d: %d\n", n, soma);

 return 0;
}
