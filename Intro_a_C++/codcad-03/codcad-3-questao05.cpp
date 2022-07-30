/**
 ============================================================================
 Nome      : codcad-3-questao05.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Torre
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int i, j, N, num, num_Maior = -10000;

    cin >> N;

    int matriz[N][N] = {0};
    int somaLinha[N] = {0};
    int somaColuna[N] = {0};
    int matrizSoma[N][N] = {0};

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            cin >> matriz[i][j];

            somaLinha[i] += matriz[i][j];
            somaColuna[j] += matriz[i][j];
        }
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            matrizSoma[i][j] = somaLinha[i] + somaColuna[j] - matriz[i][j] - matriz[i][j];
        }
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(matrizSoma[i][j] > num_Maior){
                num_Maior = matrizSoma[i][j];
            }
        }
    }

    cout << num_Maior << endl;

    return 0;
}
