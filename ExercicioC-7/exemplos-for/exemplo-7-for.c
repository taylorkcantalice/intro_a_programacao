/*
 ============================================================================
 Name        : exemplo-7-for.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int i, n;

    printf("Digite n: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i = i + 1){
        printf("%2d x %2d = %d\n", i, n, i*n);
    }

 return 0;
}
