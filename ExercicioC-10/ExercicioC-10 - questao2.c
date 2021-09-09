/**
 ============================================================================
 Nome      : ExercicioC-10 - questao2.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Programa em C, que utiliza o teorema de Pitágoras para auxiliar
             na criação ou verificação de triângulos retângulos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/****
* EhTrianguloRetangulo(): Calcula e verifica se 3 valores maiores que zero
*                         formam um triângulo retângulo.
*
* Parâmetros:
*   A(entrada): o valor do cateto A;
*   B(entrada): o valor do cateto B;
*   C(entrada): o valor da hipotenusa C.
*
* Retorno: A função retorna um valor booleano que indica se os 3 valores
*          determinam os lados de um triângulo.
****/
bool EhTrianguloRetangulo(int A, int B, int C){
    return A*A + B*B == C*C;
}

/****
* FormaTrianguloRetangulo(): Calcula e verifica se 3 valores formam um
*                            triângulo retângulo.
*
* Parâmetros:
*   A(entrada): o valor do cateto A;
*   B(entrada): o valor do cateto B;
*   C(entrada): o valor da hipotenusa C.
*
* Retorno:
*   -> Caso um, e apenas um dos valores seja menor ou igual a zero, a
*   função determina um novo valor. Assim, retornando esse novo valor
*   que viabiliza a formação de um triângulo retângulo.
*   -> Entretanto, caso dois ou mais valores sejam menores ou iguais a
*   zero, a função retorna -1 como valor.
****/
double FormaTrianguloRetangulo(int A, int B, int C){
    double novoValor;

    if((A <= 0 && B <= 0) || (A <= 0 && C <= 0) || (B <= 0 && C <= 0)){
        return -1;
    } // End If

    if (A <= 0){
        novoValor = sqrt(C*C - B*B);
    }else if (B <= 0){
        novoValor = sqrt(C*C - A*A);
    }else{
        novoValor = sqrt(A*A + B*B);
    } // End If-Else Aninhado

    return novoValor;
}

int main(void){
    int a, b, c;
    double novoValor;

    printf("Digite o valor do cateto \'a\': ");
    scanf("%d", &a);
    printf("Digite o valor do cateto \'b\': ");
    scanf("%d", &b);
    printf("Digite o valor da hipotenusa \'c\': ");
    scanf("%d", &c);

    if((a > 0) && (b > 0) && (c > 0)){
        if(EhTrianguloRetangulo(a, b, c)){
            printf("Eh Triangulo Retangulo.\n");
        } else {
            printf("Nao eh Triangulo Retangulo.\n");
        } // End If-Else
    } // End If

    if((a <= 0) || (b <= 0) || (c <= 0)){
        novoValor = FormaTrianguloRetangulo(a, b, c);

        if (novoValor > 0){
            printf("Novo valor: %.2lf.\n", novoValor);
        } else{
            printf("A entrada eh invalida.\n");
        } // If-Else
    } // If

    return 0;
}
