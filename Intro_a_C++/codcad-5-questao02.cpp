/**
 ============================================================================
 Nome      : codcad-5-questao02.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Primo
 ============================================================================
**/

#include <iostream>

using namespace std;

bool eh_primo(int x){
	int divisor = 0;

	for(int i = 1; i <= x; i++){
        if(x % i == 0){
            divisor++;
        }
	}

	if(divisor == 2){
        return true;
	} else {
	    return false;
	}
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
