/**
 ============================================================================
 Nome      : codcad-2-questao04.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Positivo, Negativo ou Nulo
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int valor;

    cin >> valor;

    if (valor > 0){
        cout << "positivo" << endl;
    } else if (valor < 0){
        cout << "negativo" << endl;
    } else {
        cout << "nulo" << endl;
    }

    return 0;
}
