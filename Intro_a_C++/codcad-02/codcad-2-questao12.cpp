/**
 ============================================================================
 Nome      : codcad-2-questao12.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Raízes
 ============================================================================
**/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int nTestes;
    double valor;

    cin >> nTestes;

    cout.precision(4);
    cout.setf(ios::fixed);

    while(nTestes--){
        cin >> valor;

        cout << sqrt(valor) << endl;

    }

    return 0;
}
