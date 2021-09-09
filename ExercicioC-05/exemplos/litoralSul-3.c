#include <stdio.h>

int main(void){
    int litrosGasolina, limiteCartao, limiteNecessario;

    printf("Digite quantos litros de gasolina no tanque: ");
    scanf("%d", &litrosGasolina);
    printf("Digite o limite disponivel no cartao: ");
    scanf("%d", &limiteCartao);

    limiteNecessario = (5 - litrosGasolina) * 5;
    if (litrosGasolina > 5 || limiteCartao >= limiteNecessario ){
        printf("Pode ir.\n");
    }else{
        printf("Va nao.\n");
    }

    return 0;
}
