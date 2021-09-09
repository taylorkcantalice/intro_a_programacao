#include <stdio.h>

int main(void){
    int i, n;

    printf("Digite n: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i = i + 1){
        printf("%2d x %d = %2d\n", i, n, i*n);
    }

    return 0;
}
