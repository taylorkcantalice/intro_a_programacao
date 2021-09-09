/*
 ============================================================================
 Name        : exemplo-2-for.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int i;

    /*
    “Para i iniciando em 1, enquanto esse i for menor ou igual a 10,
    incrementando i de 1 em 1, faça...”
    */
    for(i = 1; i <= 100; i = i + 1){
            if(i % 2 == 0){
                printf("%d\n", i);
            }
    }

 return 0;
}
