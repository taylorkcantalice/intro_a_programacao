/**
 ============================================================================
 Nome      : codcad-2-questao02.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Gangorra
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int peso_1, peso_2, comprimento_1, comprimento_2;

    cin >> peso_1 >> comprimento_1 >> peso_2 >> comprimento_2;

    if ( (peso_1 * comprimento_1) == (peso_2 * comprimento_2) ){
        cout << "0" << endl;
    } else if ( (peso_1 * comprimento_1) > (peso_2 * comprimento_2) ) {
        cout << "-1" << endl;
    } else if ( (peso_1 * comprimento_1) < (peso_2 * comprimento_2) ){
        cout << "1" << endl;
    }

    return 0;
}
