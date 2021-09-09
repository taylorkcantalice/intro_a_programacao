
#include <stdio.h>

int main(){
    int n, soma;

    scanf("%d", &n);
    soma = 0;

    while(n != 0){
        printf("n = %d\n", n);
        soma = soma + n;
        scanf("%d", &n);
    }

    printf("Soma dos valores de n: %d\n", soma);

    return 0;
}
