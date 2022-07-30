/**
 ============================================================================
 Nome      : codcad-2-questao09.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Lâmpadas
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int nTestes, interruptor, interruptor_1 = 0, interruptor_2 = 0;

    cin >> nTestes;

    for(int i = 0; i < nTestes; i++){
        cin >> interruptor;

        if(interruptor == 1){
            if(interruptor_1 == 0){
                interruptor_1 = 1;
            } else {
                interruptor_1 = 0;
            }
        }

        if(interruptor == 2){
            if(interruptor_1 == 0){
                interruptor_1 = 1;
            } else {
                interruptor_1 = 0;
            }

            if(interruptor_2 == 0){
                interruptor_2 = 1;
            } else {
                interruptor_2 = 0;
            }
        }
    }

    cout << interruptor_1 << endl << interruptor_2 << endl;

    return 0;
}
