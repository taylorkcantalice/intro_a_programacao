/*
 ============================================================================
 Name        : exemplo-8-for.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int i, j;

    for(i = 1; i <= 10; i = i + 1){
        printf("....Tabuada do %d....\n", i);
        for(j = 1; j <= 10; j = j + 1){
            printf("%2d x %2d = %d\n", j, i, j*i);
        }
    }

 return 0;
}
