/**
 ============================================================================
 Nome      : codcad-4-questao03.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Vestibular
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int i, N, acertos = 0;

    cin >> N;

    string gabarito_Oficial, gabarito_Aluno;

    cin >> gabarito_Oficial >> gabarito_Aluno;

    for(i = 0; i < N; i++){
        if(gabarito_Oficial[i] == gabarito_Aluno[i]){
            acertos++;
        }
    }

    cout << acertos << endl;

    return 0;
}
