/**
 ============================================================================
 Nome      : codcad-7-questao01.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Matryoshka
 ============================================================================
**/

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int nBonecas, recolhidas = 0;

    cin >> nBonecas;

    int vetor[nBonecas], vetor_Compara[nBonecas];
    int bonecas_Recolhidas[nBonecas] = {0};

    for(int i = 0; i < nBonecas; i++){
        cin >> vetor[i];
        vetor_Compara[i] = vetor[i];
    }

    sort(vetor, vetor+nBonecas);

    for(int i = 0; i < nBonecas; i++){
        if (vetor[i] != vetor_Compara[i]){
            bonecas_Recolhidas[recolhidas] = vetor_Compara[i];
            recolhidas++;
        }
    }

    sort(bonecas_Recolhidas, bonecas_Recolhidas+recolhidas);

    cout << recolhidas << endl;
    for(int i = 0; i < recolhidas; i++){
        cout << bonecas_Recolhidas[i] << " ";
    }
    cout << endl;

    return 0;
}
