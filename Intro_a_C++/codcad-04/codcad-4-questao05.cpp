/**
 ============================================================================
 Nome      : codcad-4-questao05.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Contagem de Algarismos
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int i, j, N;
    int tamanho, indice, contador[10] = {0};
    string valor;

    cin >> N;

    for(i = 0; i < N; i++){
        cin >> valor;

        tamanho = valor.size();
        for(j = 0; j < tamanho; j++){
            indice = valor[j] - 48;
            contador[indice]++;
        }
    }

    for(i = 0; i < 10; i++){
        cout << i << " - " << contador[i] << endl;
    }

    return 0;
}
