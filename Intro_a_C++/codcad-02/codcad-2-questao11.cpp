/**
 ============================================================================
 Nome      : codcad-2-questao11.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Consecutivos
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int nValores, valor_1, valor_N = -1, valor_Consecutivos_1 = 1, valor_Consecutivos_N = -1;

    cin >> nValores;

    cin >> valor_1;
    for(int i = 1; i < nValores; i++){
        cin >> valor_N;

        if(valor_1 == valor_N){
            valor_Consecutivos_1++;
        } else {
            valor_Consecutivos_1 = 1;
        }

        if(valor_Consecutivos_1 > valor_Consecutivos_N){
            valor_Consecutivos_N = valor_Consecutivos_1;
        }

        valor_1 = valor_N;
    }

    cout << valor_Consecutivos_N << endl;

    return 0;
}
