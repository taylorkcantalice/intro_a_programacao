#include <stdio.h>

int main(void){
    int obitos;

    printf("Digite o numero de obitos na cidade: ");
    scanf("%d", &obitos);

    if (obitos < 10){
        printf("Bandeira VERDE.\n");
    }else if (10 <= obitos && obitos <= 20){
        printf("Bandeira AMARELA.\n");
    }else if (20 < obitos && obitos <= 40){
        printf("Bandeira LARANJA.\n");
    }else{
        printf("Bandeira VERMELHA.\n");
    }

    return 0;
}
