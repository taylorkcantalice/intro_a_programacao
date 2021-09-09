/**
 ============================================================================
 Nome      : codcad-2-questao07.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Garçom
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int nTestes, nLatas, nCopos, nCopos_Quebrados = 0;

    cin >> nTestes;

    while(nTestes--){
        cin >> nLatas >> nCopos;

        if (nLatas > nCopos){
            nCopos_Quebrados += nCopos;
        }
    }

    cout << nCopos_Quebrados << endl;

    return 0;
}
