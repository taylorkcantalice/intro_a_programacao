#include <stdio.h>

int main(void){
    int n, maior, menor;

    maior = -10000;
    menor = 10000;

    do{
        printf("Digite n: ");
        scanf("%d", &n);

        if (n != 0 && n > maior){
            maior = n;
        }

        if (n != 0 && n < menor){
            menor = n;
        }

    }while (n != 0);

    printf("maior: %d\nmenor: %d\n", maior, menor);

    return 0;
}
