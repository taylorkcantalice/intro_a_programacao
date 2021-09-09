#include <stdio.h>

int main(void) {
    int x, i, valor;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    i = 1;
    valor = x;
    while(i <= 10){
        printf("%d.%d = %d\n", x, i, valor);
        valor = valor + x;
        i = i + 1;
    }

    return 0;
}
