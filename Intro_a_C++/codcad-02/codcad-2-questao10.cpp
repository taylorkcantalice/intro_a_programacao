/**
 ============================================================================
 Nome      : codcad-2-questao10.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Todos os Divisores
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int valor;

    cin >> valor;

    for(int i = 1; i < valor; i++){
        if( (valor % i) == 0){
            cout << i << " ";
        }
    }

    cout << valor << "\n";

    return 0;
}
