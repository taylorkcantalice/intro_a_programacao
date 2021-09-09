/*
 ============================================================================
 Name        : exemplo-3-do-while.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int n, soma;

    soma = 0;
    do{
        printf("Digite n: ");
        scanf("%d", &n);
        soma = soma + n;
        printf("n = %d\n", n);
    }while (n != 0);

    printf("Soma = %d\n", soma);
 return 0;
}
