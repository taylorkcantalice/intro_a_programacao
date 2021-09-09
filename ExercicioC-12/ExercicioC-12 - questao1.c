/**
 ============================================================================
 Nome      : ExercicioC-12 - questao1.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Programa que avalia os elementos de um array
 ============================================================================
 */

#include <stdio.h>

#define TAMANHO_DO_ARRAY 10

/****
* SomaArray(): Calcula a soma de todos os elementos de um array.
*
* Parâmetros:
*   ar[](entrada): conjunto de valores inteiros dos elementos de um array;
*   tamanhoDoArray(entrada): indica o tamanho de um array.
*
* Retorno: A função retorna a soma de todos os elementos de um array.
****/
int SomaArray(int ar[], int tamanhoDoArray){
    int i, soma = 0;

    for(i = 0; i < tamanhoDoArray; i++){
        soma += ar[i];
    }

    return soma;
} // End SomaArray()

/****
* MediaArray(): Calcula a media dos elementos de um array.
*
* Parâmetros:
*   ar[](entrada): conjunto de valores inteiros dos elementos de um array;
*   tamanhoDoArray(entrada): indica o tamanho de um array.
*
* Retorno: A função retorna a media dos elementos de um array.
****/
float MediaArray(int ar[], int tamanhoDoArray){
    int i, soma = 0;

    for(i = 0; i < tamanhoDoArray; i++){
        soma += ar[i];
    }

    return (float)soma / tamanhoDoArray;
} // End MediaArray()

/****
* EmArray(): Calcula um valor booleano de um valor pertencente ao array.
*
* Parâmetros:
*   ar[](entrada): conjunto de valores inteiros dos elementos de um array;
*   tamanhoDoArray(entrada): indica o tamanho de um array;
*   elemento(entrada): valor a ser comparado com os elementos de um array.
*
* Retorno: A função retorna um valor booleano:
*          1(um): indica que o valor analisado é um elemento do array.
*          0(zero): indica que o valor analisado não pertence ao array.
****/
int EmArray(int ar[], int tamanhoDoArray, int elemento){
    int i;

    for(i = 0; i < tamanhoDoArray; i++){
        if(ar[i] == elemento){
            return 1;
        }
    }

    return 0;
} // End EmArray()

/****
* MaximoValorArray(): Calcula o maior elementos de um array.
*
* Parâmetros:
*   ar[](entrada): conjunto de valores inteiros dos elementos de um array;
*   tamanhoDoArray(entrada): indica o tamanho de um array.
*
* Retorno: A função retorna o maior elemento de um array.
****/
int MaximoValorArray(int ar[], int tamanhoDoArray){
    int i, maiorElemento = -1000000;

    for(i = 0; i < tamanhoDoArray; i++){
        if (ar[i] > maiorElemento){
            maiorElemento = ar[i];
        }
    }

    return maiorElemento;
} // End MaximoValorArray()

/****
* EhArrayOrdenado(): Analisa se o array é ordenado crescente ou decrescente.
*
* Parâmetros:
*   ar[](entrada): conjunto de valores inteiros dos elementos de um array;
*   tamanhoDoArray(entrada): indica o tamanho de um array.
*
* Retorno: A função retorna um valor booleano:
*          1(um): indica que o array é ordenado crescente;
*          2(dois): indica que o array é ordenado decrescente;
*         -1(menos um): indica que o array não é ordenado.
****/
int EhArrayOrdenado(int ar[], int tamanhoDoArray){
    int i, elemento;

    // Array Ordenado Crescente
    if (ar[0] < ar[tamanhoDoArray - 1]){
        for(i = 0, elemento = ar[0]; i < tamanhoDoArray; i++){
            if(ar[i] >= elemento){
                elemento = ar[i];
            } else {
                return -1;
            }
        }
        return 1;
    // Array Ordenado Decrescente
    } else {
        for(i = 0, elemento = ar[0]; i < tamanhoDoArray; i++){
            if(ar[i] <= elemento){
                elemento = ar[i];
            } else {
                return -1;
            }
        }
        return 2;
    }

    return 0;
} // End EhArrayOrdenado()

int main(void){
    int i, ar[TAMANHO_DO_ARRAY], elementoProcurado;

    // Entrada de valores para o array.
    for(i = 0; i < TAMANHO_DO_ARRAY; i++){
        printf("Digite #%d valor do Array: ", i+1);
        scanf("%d", &ar[i]);
    }

    // Imprime os elementos em ordem crescente e decrescente.
    printf("\n\n");
    for(i = 0; i < TAMANHO_DO_ARRAY; i++){
        printf("ar[%d] = %d\n", i, ar[i]);
    }
    printf("\n\n");
    for(i = 0; i < TAMANHO_DO_ARRAY; i++){
        printf("ar[%d] = %d\n", TAMANHO_DO_ARRAY-1-i, ar[TAMANHO_DO_ARRAY-1-i]);
    }

    // Imprime o elemento armazenado na quita posição do array.
    printf("\n\n");
    printf("Elemento armazenado em ar[4] = %d\n\n\n", ar[4]);

    // Imprime os elementos armazenados em índices ímpares.
    for(i = 0; i < TAMANHO_DO_ARRAY; i++){
        if(i % 2 != 0){
            printf("Array de indice impar: Ar[%d] = %d\n", i, ar[i]);
        }
    }

    // Imprime a soma de todos os elementos do array.
    printf("\n\n");
    printf("Soma dos elementos do array: %d\n\n\n", SomaArray(ar, TAMANHO_DO_ARRAY));

    // Imprime a média dos elementos do array.
    printf("Media dos elementos do array: %3.1f\n\n\n", MediaArray(ar, TAMANHO_DO_ARRAY));

    // Imprime se um determinado valor pertence ao array
    printf("Digite um valor que corresponda a algum elemento do array: ");
    scanf("%d", &elementoProcurado);
    if(EmArray(ar, TAMANHO_DO_ARRAY, elementoProcurado)){
        printf("VERDADEIRO\nElemento pertencente ao array\n\n\n");
    } else {
        printf("FALSO\nElemento nao pertencente ao array\n\n\n");
    }
    //printf("Elemento %d %s pertencente ao array\n\n", elementoProcurado, EmArray(ar, TAMANHO_DO_ARRAY, elementoProcurado) ? "" : "nao");

    // Imprime o maior elemento de um array.
    printf("O maior elemento do array: %d\n\n\n", MaximoValorArray(ar, TAMANHO_DO_ARRAY));

    // Imprime se um array é ordenado
    switch (EhArrayOrdenado(ar, TAMANHO_DO_ARRAY)){
        case 1:
            printf("VERDADEIRO\nO array eh ordenado crescente\n");
            break;
        case 2:
            printf("VERDADEIRO\nO array eh ordenado decresente\n");
            break;
        case -1:
            printf("FALSO\nO array naoh eh ordenado\n");
    }

    return 0;
}
