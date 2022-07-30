/**
 ============================================================================
 Nome      : codcad-8-questao02.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268 (UFPB)
 Versao    : 1.0
 Copyright : Your copyright notice
 Descricao : F�rmula 1
 ============================================================================
**/

#include <iostream>
#include <algorithm>

using namespace std;

struct piloto {
    int identificacao, pontuacao;
};

int FuncaoCompara (piloto a, piloto b){
    if(a.pontuacao != b.pontuacao){
        return a.pontuacao > b.pontuacao;
    } else {
        return a.identificacao < b.identificacao;
    }
}

int main(){
    int n_GrandesPremios, n_Pilotos, n_SistemasDePontuacao, n_UltimaOrdemDeChegada;
    int indice;

    while(cin >> n_GrandesPremios >> n_Pilotos && n_GrandesPremios != 0 && n_Pilotos != 0){



        // LIMPANDO O LIXO DE MEM�RIA DA VARI�VEL VETOR_PILOTO //
        piloto vetor_Piloto[n_Pilotos];

        for(int i = 0; i < n_Pilotos; i++){
            vetor_Piloto[i].identificacao = i+1;
            vetor_Piloto[i].pontuacao = 0;
        }

        // ALOCANDO NO VETOR_COLOCACAO A SEGU�NCIA DE FINALISTAS NAS CORRIDAS //
        int vetor_Colocacao[n_GrandesPremios][n_Pilotos] = {0};

        for(int i = 0; i < n_GrandesPremios; i++){
            for(int j = 0; j < n_Pilotos; j++){
                cin >> vetor_Colocacao[i][j];
            }
        } // END FOR

        /**
          * ADICIONANDO AO VETOR_PONTOS AS DIFERENTES TABELAS DE PONTUA��O DAS COMPETI��ES DE FORMULA I
          * E TAMB�M, DISTRIBUIDO AS DEVIDAS PONTUA��ES AOS COMPETIDORES DA CORRIDA, DE ACORDO COM SUAS
          * POSI��ES
          */
        cin >> n_SistemasDePontuacao;

        int vetor_Pontos[n_Pilotos] = {0};

        while(n_SistemasDePontuacao--){
            cin >> n_UltimaOrdemDeChegada;

            for(int i = 0; i < n_UltimaOrdemDeChegada; i++){
                cin >> vetor_Pontos[i];
            }

            for(int i = 0; i < n_GrandesPremios; i++){
                for(int j = 0; j < n_UltimaOrdemDeChegada; j++){
                    // FOR PARA ENCONTRAR O PILOTO RESPONSAVEL POR DETERMINADA COLOCA��O //
                    for(indice = 0; vetor_Colocacao[i][indice] != j+1; indice++);
                    vetor_Piloto[indice].pontuacao += vetor_Pontos[j];
                }
            }

            sort(vetor_Piloto, vetor_Piloto+n_Pilotos, FuncaoCompara);

            for(int i = 0; i < n_Pilotos; i++){
                if(vetor_Piloto[0].pontuacao == vetor_Piloto[i].pontuacao){
                    cout << vetor_Piloto[i].identificacao << " ";
                }
            }
            cout << endl;

            // LIMPANDO A MEM�RIA DA VARI�VEL VETOR_PILOTO //
            for(int i = 0; i < n_Pilotos; i++){
                vetor_Piloto[i].identificacao = i+1;
                vetor_Piloto[i].pontuacao = 0;
                vetor_Pontos[i] = 0;
            }
        } // END WHILE
    } // END WHILE

    return 0;
}
