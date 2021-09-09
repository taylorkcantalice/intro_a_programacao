#include <stdio.h>

int main(void){
    int n;

    do{
        printf("Digite n: ");
        scanf("%d", &n);
        printf("n = %d\n", n);
    }while (n != 0);

    return 0;
}
