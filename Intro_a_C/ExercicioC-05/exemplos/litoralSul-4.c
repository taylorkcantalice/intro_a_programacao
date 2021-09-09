#include <stdio.h>

int main(void){
    int litrosGasolina, limiteCartao, limiteNecessario;
    int emPandemia;

    printf("Digite quantos litros de gasolina no tanque: ");
    scanf("%d", &litrosGasolina);
    printf("Digite o limite disponivel no cartao: ");
    scanf("%d", &limiteCartao);
    printf("Digite se estamos em pandemia (1 para sim, 0 para nao): ");
    scanf("%d", &emPandemia);

    if (emPandemia){
        printf("FIQUE EM CASA!!!");
        return 0;
    }

    limiteNecessario = (5 - litrosGasolina) * 5;
    if (litrosGasolina > 5 || limiteCartao >= limiteNecessario ){
        printf("Pode ir.\n");
    }else{
        printf("Va nao.\n");
    }

    return 0;
}
