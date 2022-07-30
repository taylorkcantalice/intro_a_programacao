/**
 ============================================================================
 Nome      : codcad-2-questao03.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Par ou Ímpar
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int bino, cino;

    cin >> bino >> cino;

    if ( (bino + cino) % 2 == 0){
        cout << "Bino" << endl;
    } else {
        cout << "Cino" << endl;
    }

    return 0;
}
