/*
 ============================================================================
 Name        : exemplo-2-do-while.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

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
