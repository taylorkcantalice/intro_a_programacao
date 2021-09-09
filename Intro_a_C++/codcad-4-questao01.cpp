/**
 ============================================================================
 Nome      : codcad-4-questao01.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Operações
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    char operacao;
    double valor1, valor2;

    cin >> operacao >> valor1 >> valor2;

    cout.precision(2);
    cout.setf(ios::fixed);

    if(operacao == 'M'){
        cout << valor1*valor2 << endl;
    }
    if(operacao == 'D'){
        cout << valor1/valor2 << endl;
    }

    return 0;
}
