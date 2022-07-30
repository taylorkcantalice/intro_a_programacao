/**
 ============================================================================
 Nome      : codcad-4-questao02.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Overflow
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int tamanhoDaMemoria;
    char operacao;
    double valor1, valor2;

    cin >> tamanhoDaMemoria >> valor1 >> operacao >> valor2;

    if(operacao == '+'){
        if(valor1+valor2 <= tamanhoDaMemoria){
            cout << "OK" << endl;
        } else {
            cout << "OVERFLOW" << endl;
        }
    }
    if(operacao == '*'){
        if(valor1*valor2 <= tamanhoDaMemoria){
            cout << "OK" << endl;
        } else {
            cout << "OVERFLOW" << endl;
        }
    }

    return 0;
}
