/**
 ============================================================================
 Nome      : codcad-2-questao13.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Potências Simples
 ============================================================================
**/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double valorX, valorY;

    cin >> valorX >> valorY;

    cout.precision(4);
    cout.setf(ios::fixed);

    cout << pow(valorX, valorY) << endl;

    return 0;
}
