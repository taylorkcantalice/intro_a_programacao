/*
 ============================================================================
 Name        : exemplo-1-do-while.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int n;

    n = -1;
    while (n != 0){
        printf("Digite n: ");
        scanf("%d", &n);
        printf("n = %d\n", n);
    }
 return 0;
}
