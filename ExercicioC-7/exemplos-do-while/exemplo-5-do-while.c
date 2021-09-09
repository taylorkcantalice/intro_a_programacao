/*
 ============================================================================
 Name        : exemplo-5-do-while.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int n, maior, menor;
    int contador;

    contador = 1;
    do{
        printf("Digite n: ");
        scanf("%d", &n);

        if (contador == 1){
            maior = n;
            menor = n;
        }

        if (n != 0 && n > maior){
            maior = n;
        }
        if (n != 0 && n < menor){
            menor = n;
        }
        contador = contador + 1;
    }while (n != 0);

    printf("maior: %d\nmenor: %d\n", maior, menor);

 return 0;
}
