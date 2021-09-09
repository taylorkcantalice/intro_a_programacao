/**
 ============================================================================
 Nome      : codcad-2-questao08.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Prêmio do Milhão
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int i, nDias, nAcessos, dia = 0, total = 0;

    cin >> nDias;

    i = 1;
    while(i <= nDias){
        cin >> nAcessos;

        total += nAcessos;

        if (total >= 1000000 && dia == 0){
            dia = i;
        }

        i++;
    }

    if (total >= 1000000){
        cout << dia << endl;
    }

    return 0;
}
