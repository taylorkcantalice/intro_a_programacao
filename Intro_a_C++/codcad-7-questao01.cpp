/**
 ============================================================================
 Nome      : codcad-7-questao01.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Ordenação Simples
 ============================================================================
**/

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;

    cin >> N;

    int vetor[N];

    for(int i = 0; i < N; i++){
        cin >> vetor[i];
    }

    sort(vetor, vetor+N);

    for(int i = 0; i < N; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
