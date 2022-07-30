/**
 ============================================================================
 Nome      : codcad-3-questao03.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Fita Colorida
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int tamanhoDoVetor;

    cin >> tamanhoDoVetor;

    int vetor_FitaColorida[tamanhoDoVetor];

    for(int i = 0; i < tamanhoDoVetor; i++){
        cin >> vetor_FitaColorida[i];
    }

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < tamanhoDoVetor; j++){
            if(vetor_FitaColorida[j] == -1){
                if(j == 0){
                    if(vetor_FitaColorida[j+1] == i){
                        vetor_FitaColorida[j] = i+1;
                    }
                } else if (j == tamanhoDoVetor - 1){
                    if(vetor_FitaColorida[j-1] == i){
                        vetor_FitaColorida[j] = i+1;
                    }
                } else {
                    if(vetor_FitaColorida[j-1] == i || vetor_FitaColorida[j+1] == i){
                        vetor_FitaColorida[j] = i+1;
                    }
                }
            }
        }
    }

    for(int i = 0; i < tamanhoDoVetor; i++){
        if(vetor_FitaColorida[i] == -1){
            vetor_FitaColorida[i] = 9;
        }
    }

    for(int i = 0; i < tamanhoDoVetor - 1; i++){
        cout << vetor_FitaColorida[i] << " ";
    }

    cout << vetor_FitaColorida[tamanhoDoVetor - 1] << endl;

    return 0;
}
