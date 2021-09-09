/**
 ============================================================================
 Nome      : codcad-5-questao01.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Titulo
 ============================================================================
**/

#include <iostream>

using namespace std;

string title(string F){
    int i;

    if(F[0] >= 'a' && F[0] <= 'z'){
        F[0] = (char)(F[0]-32);
    }
    for(i = 1; i <= F.size(); i++){
        if(F[i-1] != ' ' && F[i] >= 'A' && F[i] <= 'Z'){
            F[i] = (char)(F[i]+32);
        }
        if(F[i-1] == ' ' && F[i] >= 'a' && F[i] <= 'z'){
            F[i] = (char)(F[i]-32);
        }
    }

    return F;
}

int main(){
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
