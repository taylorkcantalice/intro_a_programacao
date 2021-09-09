/**
 ============================================================================
 Nome      : codcad-6-questao02.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Torres de Hanói
 ============================================================================
**/

#include <iostream>
#include <cmath>

using namespace std;

int hanoi(int N){
    return pow(2, N) - 1;
}

  int main(){
    int i, N;

    i = 0;
    while(1){
        cin >> N;

        if(N == 0){
            break;
        }
        i++;

        cout << "Teste " << i << endl;
        cout << hanoi(N) << endl;
    }

    return 0;
}
