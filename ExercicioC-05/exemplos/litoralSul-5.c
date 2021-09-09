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

    limiteNecessario = (5 - litrosGasolina) * 5;
    if ( (litrosGasolina > 5 || limiteCartao >= limiteNecessario) && !emPandemia){
        printf("Pode ir.\n");
    }else{
        printf("Fique em casa.\n");
    }

    return 0;
}
