#include <stdio.h>

int main(void){
    int n, maior, menor;
    int contador;

    contador = 1;
    do{
        printf("Digite n: ");
        scanf("%d", &n);

        if (contador == 1){
            menor = n;
            maior = n;
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
