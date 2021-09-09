#include <stdio.h>

int main(void){
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if (a > b && a > c){
        printf("O maior valor eh o de a: %d\n", a);
    }else{
        if (b > a && b > c){
            printf("O maior valor eh o de b: %d\n", b);
        }else{
            printf("O maior valor eh o de c: %d\n", c);
        }
    }

    return 0;
}
