
#include <stdio.h>

int main(){
    int i, repeticoes;

    printf("Digite a quantidade de repeticoes: ");
    scanf("%d", &repeticoes);
    i = 1;
    while(i <= repeticoes){
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}
