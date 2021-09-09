#include <stdio.h>

int main(void){
    int litrosGasolina, limiteCartao;

    printf("Digite quantos litros de gasolina no tanque: ");
    scanf("%d", &litrosGasolina);
    printf("Digite o limite disponivel no cartao: ");
    scanf("%d", &limiteCartao);

    if (litrosGasolina > 5 || limiteCartao >= (5-litrosGasolina)*5 ){
        printf("Pode ir.\n");
    }else{
        printf("Va nao.\n");
    }

    return 0;
}
