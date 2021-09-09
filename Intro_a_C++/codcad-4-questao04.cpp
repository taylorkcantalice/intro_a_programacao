/**
 ============================================================================
 Nome      : codcad-4-questao04.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Huaauhahhuahau
 ============================================================================
**/

#include <iostream>

using namespace std;

int main(){
    int i, j = 0, tamanho;
    string Risada_Digital;
    char aux_Risada_Digital[50];

    cin >> Risada_Digital;

    for(i = 0; i < Risada_Digital.size(); i++){
        if(Risada_Digital[i] == 'a' || Risada_Digital[i] == 'e' || Risada_Digital[i] == 'i' || Risada_Digital[i] == 'o' || Risada_Digital[i] == 'u'){
            aux_Risada_Digital[j] = Risada_Digital[i];
            j++;
        }
    }
    aux_Risada_Digital[j] = '\0';

    tamanho = j;

    for(i = 0, j -= 1; i < tamanho; i++, j--){
        if(aux_Risada_Digital[i] != aux_Risada_Digital[j]){
            cout << "N" << endl;
            return 0;
        }
    }

    cout << "S" << endl;

    return 0;
}
