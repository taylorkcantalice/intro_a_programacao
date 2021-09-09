#include <stdio.h>

int main(void){
    int n, maior, menor;
    int primeiro;

    primeiro = 1;
    do{
        printf("Digite n: ");
        scanf("%d", &n);

        if (primeiro){
            menor = n;
            maior = n;
            primeiro = 0;
        }

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
