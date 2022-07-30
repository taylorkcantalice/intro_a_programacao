/**
 ============================================================================
 Nome      : codcad-2-questao01.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Bondinho
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int nAlunos, nMonitores;

    cin >> nAlunos >> nMonitores;

    if ( (nAlunos+nMonitores) <= 50 ){
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
