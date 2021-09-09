/**
 ============================================================================
 Nome      : codcad-3-questao02.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Campo Minado
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int tamanhoDoVetor, quantidadeDeMinas;

    cin >> tamanhoDoVetor;

    int vetor[tamanhoDoVetor];

    for(int i = 0; i < tamanhoDoVetor; i++){
        cin >> vetor[i];
    }

    for(int i = 0; i < tamanhoDoVetor; i++){
        quantidadeDeMinas = 0;
        if(i > 0){
           quantidadeDeMinas += vetor[i-1];
        }
        quantidadeDeMinas += vetor[i];
        if(i < tamanhoDoVetor-1){
            quantidadeDeMinas += vetor[i+1];
        }

        cout << quantidadeDeMinas << endl;
    }

    return 0;
}
