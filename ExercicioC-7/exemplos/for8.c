#include <stdio.h>

int main(void){
    int i, j;

    for (i = 1; i <= 10; i = i + 1){
        printf("---- Tabuada do %d ----\n", i);
        for(j = 1; j <= 10; j = j + 1){
            printf("%2d x %d = %2d\n", j, i, j*i);
        }
    }

    return 0;
}
