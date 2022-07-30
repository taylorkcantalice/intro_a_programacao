/**
 ============================================================================
 Nome      : codcad-8-questao01.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : Olimpíadas
 ============================================================================
**/

#include <iostream>
#include <algorithm>

using namespace std;

struct pais {
    int identificador, ouro, prata, bronze;
};

int FuncaoCompara (pais a, pais b){
    if(a.ouro != b.ouro){
        return a.ouro > b.ouro;
    } else if(a.prata != b.prata){
        return a.prata > b.prata;
    } else if(a.bronze != b.bronze){
        return a.bronze > b.bronze;
    } else {
        return a.identificador < b.identificador;
    }
}

int main(){
    int nPaises, nModalidades;
    int O, P, B;

    cin >> nPaises >> nModalidades;

    pais vetor_Pais[nPaises];

    for(int i; i < nPaises; i++){
        vetor_Pais[i].identificador = i + 1;
        vetor_Pais[i].ouro = 0;
        vetor_Pais[i].prata = 0;
        vetor_Pais[i].bronze = 0;
    }

    for(int i; i < nModalidades; i++){
        cin >> O >> P >> B;

        vetor_Pais[O-1].ouro++;
        vetor_Pais[P-1].prata++;
        vetor_Pais[B-1].bronze++;
    }

    sort(vetor_Pais, vetor_Pais+nPaises, FuncaoCompara);

    for(int i = 0; i < nPaises; i++){
        cout << vetor_Pais[i].identificador << " ";
    }
    cout << endl;

    return 0;
}
