/**
 ============================================================================
 Nome      : codcad-6-questao01.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Fibonacci
 ============================================================================
**/

#include <iostream>

using namespace std;

int fibonacci(int N){
    if(N < 2){
      return 1;
    }

    return fibonacci(N - 1) + fibonacci(N - 2);
}

  int main(){
    int N;
    cin >> N;
    cout << fibonacci(N) << endl;

    return 0;
}
