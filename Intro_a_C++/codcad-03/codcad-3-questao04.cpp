/**
 ============================================================================
 Nome      : codcad-3-questao04.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Quadrado Mágico
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int i, j, N, num, eh_Magico = 1;

    cin >> N;

    int somaLinha[N] = {0};
    int somaColuna[N] = {0};
    int somaDiagonal_Esq = 0;
    int somaDiagonal_Dir = 0;


    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            cin >> num;

            somaLinha[i] += num;
            somaColuna[j] += num;

            if(i == j){
                somaDiagonal_Esq += num;
            }

            if(i + j == N - 1){
                somaDiagonal_Dir += num;
            }
        }
    }

    if(somaDiagonal_Esq != somaDiagonal_Dir){
        eh_Magico = 0;
    }

    for(i = 0; i < N; i++){
        if(somaDiagonal_Esq != somaLinha[i] || somaDiagonal_Esq != somaColuna[i]){
            eh_Magico = 0;
        }
    }

    if(eh_Magico){
        cout << somaDiagonal_Esq << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
