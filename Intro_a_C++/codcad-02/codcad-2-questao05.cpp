/**
 ============================================================================
 Nome      : codcad-2-questao05.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Aprovado ou Reprovado
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    double nota_1, nota_2;

    cin >> nota_1 >> nota_2;

    if ( ((nota_1 + nota_2)/2) >= 7 ){
        cout << "Aprovado" << endl;
    } else if ( ((nota_1 + nota_2)/2) < 7 && ((nota_1 + nota_2)/2) >= 4 ){
        cout << "Recuperacao" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    return 0;
}
