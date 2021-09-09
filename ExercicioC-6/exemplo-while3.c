
#include <stdio.h>

int main(){
    int n, soma, contador;

    scanf("%d", &n);
    soma = 0;
    contador = 0;

    while(n != 0){
        printf("n = %d\n", n);
        soma = soma + n;
        scanf("%d", &n);
        contador = contador + 1;
    }

    printf("Soma dos valores de n: %d\n", soma);
    printf("O while se repetiu %d vezes.\n", contador);

    return 0;
}
