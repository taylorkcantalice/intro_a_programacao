/**
 ============================================================================
 Nome      : codcad-3-questao01.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Código (OBI 2015)
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int tamanhoDoVetor, contador = 0;

    cin >> tamanhoDoVetor;

    int vetor[tamanhoDoVetor];

    for(int i = 0; i < tamanhoDoVetor; i++){
        cin >> vetor[i];
    }

    for(int i = 0; i < tamanhoDoVetor - 2; i++){
        if( vetor[i] == 1 && vetor[i+1] == 0 && vetor[i+2] == 0){
            contador++;
        }
    }

    cout << contador << endl;

    return 0;
}
