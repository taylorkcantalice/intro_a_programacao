/*
 ============================================================================
 Name        : exemplo-6-for.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int i, n, fatorial;

    printf("Digite n: ");
    scanf("%d", &n);

    fatorial = 1;
    for(i = 1; i <= n; i = i + 1){
        fatorial = fatorial * i;
    }

    printf("%d! = %d\n", n, fatorial);

 return 0;
}
