/**
 ============================================================================
 Nome      : codcad-2-questao06.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Flíper
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int porta_P, porta_R;

    cin >> porta_P >> porta_R;

    if (porta_P) {
        if (porta_R){
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    } else {
        cout << "C" << endl;
    }

    return 0;
}
