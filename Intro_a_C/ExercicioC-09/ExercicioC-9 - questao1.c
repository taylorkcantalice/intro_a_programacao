/*
 ============================================================================
 Name        : ExercicioC-9 - questao1.c
 Author      : Taylor Klaus Cantalice Nobrega - 20200004268
 Version     : 1.0
 Description : Programa que calcula as ra�zes de uma equa��o do segundo grau
               a partir dos seus coeficientes, que devem ser inseridos pelo
               usu�rio.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

/****
* Delta(): Calcula o valor do determinante da equa��o do segundo grau.
*
* Par�metros:
*   a (entrada): o valor do coeficiente 'a' da equa��o do segundo grau.
*   b (entrada): o valor do coeficiente 'b' da equa��o do segundo grau.
*   c (entrada): o valor do coeficiente 'c' da equa��o do segundo grau.
*
* Retorno: A fun��o retorna o valor do delta da equa��o do segundo grau.
****/
float Delta(int a, int b, int c){
    return b*b - 4*a*c;
}

/****
* RaizX1(): Calcula o valor da ra�z 'x1' da equa��o.
*
* Par�metro:
*   a (entrada): o valor do coeficiente 'a' da equa��o do segundo grau.
*   b (entrada): o valor do coeficiente 'b' da equa��o do segundo grau.
*   delta (entrada): o valor do determinante ( o delta) da equa��o do segundo grau.
*
* Retorno: A fun��o retorna o valor da ra�z 'x1' da equa��o do segundo grau.
****/
float RaizX1(int a, int b, float delta){
    return (-b + sqrt(delta)) / (2*a);
}

/****
* RaizX2(): Calcula o valor da ra�z 'x2' da equa��o.
*
* Par�metro:
*   a (entrada): o valor do coeficiente 'a' da equa��o do segundo grau.
*   b (entrada): o valor do coeficiente 'b' da equa��o do segundo grau.
*   delta (entrada): o valor do determinante ( o delta) da equa��o do segundo grau.
*
* Retorno: A fun��o retorna o valor da ra�z 'x2' da equa��o do segundo grau.
****/
float RaizX2(int a, int b, float delta){
    return (-b - sqrt(delta)) / (2*a);
}

int main(void){
    int a, b, c;
    float delta, x1, x2;

    printf("Digite o valor do coeficiente \'a\': ");
    scanf("%d", &a);
    printf("Digite o valor do coeficiente \'b\': ");
    scanf("%d", &b);
    printf("Digite o valor do coeficiente \'c\': ");
    scanf("%d", &c);

    if (a == 0){
        puts("O valor de \'a\' precisa ser diferente de 0 para a equacao de segundo grau existir.");
        return 1;
    }

    delta = Delta(a, b, c);
    if (delta < 0){
        puts("As raizes nao poderam ser calculadas, quando o valor do discriminante (o delta) for negativo.");
        return 2;
    }

    x1 = RaizX1(a, b, delta);
    x2 = RaizX2(a, b, delta);

    if (delta > 0){
        printf("O valor de delta eh maior que 0, entao a equacao possui duas raizes distintas iguais a: x1 = %.1f e x2 = %.1f\n", x1, x2);
    } else {
        printf("O valor de delta eh igual a 0, entao a equacao possui raizes iguais a: %.1f\n", x1);
    }

 return 0;
}
