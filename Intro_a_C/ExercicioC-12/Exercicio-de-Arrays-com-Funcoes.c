/**
 ============================================================================
 Nome      : Exercicio-de-Arrays-com-Funcoes.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao :
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

#define MAX_ALUNOS 1000

double Media(double ar_Notas[], int tamanhoDoArray){
    int i;
    double soma = 0;

    for(i = 0; i < tamanhoDoArray; i++){
        soma += ar_Notas[i];
    }

    return soma / tamanhoDoArray;
} // End Media()

double Variancia(double ar_Notas[], int tamanhoDoArray, double media){
    int i;
    double soma = 0;

    for(i = 0; i < tamanhoDoArray; i++){
        soma += pow(ar_Notas[i] - media, 2);
    }

    return soma / tamanhoDoArray;
} // End Variancia()

double DesvioPadrao(double variancia){
    return sqrt(variancia);
}

int main(void){
    int i, nAlunos;
    double ar_Notas[MAX_ALUNOS], media, variancia, desvioPadrao;

    printf("Numero de alunos (maximo de %d): ", MAX_ALUNOS);
    scanf("%d", &nAlunos);

    for(i = 0; i < nAlunos; i++){
        printf("Digite a nota do #%d Aluno: ", i+1);
        scanf("%lf", &ar_Notas[i]);
    } // End For

    media = Media(ar_Notas, nAlunos);
    printf("Media: %3.1lf\n", media);

    variancia = Variancia(ar_Notas, nAlunos, media);
    printf("Variancia: %3.1lf\n", variancia);

    desvioPadrao = DesvioPadrao(variancia);
    printf("Desvio Padrao: %3.1lf\n", desvioPadrao);

    return 0;
}
