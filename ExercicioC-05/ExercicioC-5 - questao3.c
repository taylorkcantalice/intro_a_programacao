/*
 ============================================================================
 Name        : ExercicioC-5 - questao3.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa em C, que lê 6 notas sendo 3 para cada disciplina,
               calcula a media ponderada das 3 Unidades e, por fim,
               apresente a média aritmética anual do semestre.
 ============================================================================
 */

#include <stdio.h>

int main(void){
    float nota1, nota2;
    float notaUnidade1, notaUnidade2, notaUnidade3;
    float media;

    printf("Digite o valor da nota da Primeira Disciplina na Unidade 1: ");
    scanf("%f", &nota1);
    printf("Digite o valor da nota da Segunda Disciplina na Unidade 1: ");
    scanf("%f", &nota2);

    if (nota1 > nota2) {
        notaUnidade1 = (6*nota1+4*nota2)/10;
        printf("A media da Unidade 1 eh: %.1f\n\n", notaUnidade1);
    } else {
        notaUnidade1 = (4*nota1+6*nota2)/10;
        printf("A media da Unidade 1 eh: %.1f\n\n", notaUnidade1);
    }

    printf("Digite o valor da nota da Primeira Disciplina na Unidade 2: ");
    scanf("%f", &nota1);
    printf("Digite o valor da nota da Segunda Disciplina na Unidade 2: ");
    scanf("%f", &nota2);

    if (nota1 > nota2) {
        notaUnidade2 = (6*nota1+4*nota2)/10;
        printf("A media da Unidade 2 eh: %.1f\n\n", notaUnidade2);
    } else {
        notaUnidade2 = (4*nota1+6*nota2)/10;
        printf("A media da Unidade 2 eh: %.1f\n\n", notaUnidade2);
    }

    printf("Digite o valor da nota da Primeira Disciplina na Unidade 3: ");
    scanf("%f", &nota1);
    printf("Digite o valor da nota da Segunda Disciplina na Unidade 3: ");
    scanf("%f", &nota2);

    if (nota1 > nota2) {
        notaUnidade3 = (6*nota1+4*nota2)/10;
        printf("A media da Unidade 3 eh: %.1f\n\n", notaUnidade3);
    } else {
        notaUnidade3 = (4*nota1+6*nota2)/10;
        printf("A media da Unidade 3 eh: %.1f\n\n", notaUnidade3);
    }

    media = (notaUnidade1+notaUnidade2+notaUnidade3)/3;

    if (media < 5.0) {
        printf("A media total do semestre eh: %f, com conceito F\n", media);
    } else if (5.0 <= media && media < 6.0) {
        printf("A media total do semestre eh: %f, com conceito E\n", media);
    } else if (6.0 <= media && media < 7.0) {
        printf("A media total do semestre eh: %f, com conceito D\n", media);
    } else if (7.0 <= media && media < 8.0) {
        printf("A media total do semestre eh: %f, com conceito C\n", media);
    } else if (8.0 <= media && media < 9.0) {
        printf("A media total do semestre eh: %f, com conceito B\n", media);
    } else {
        printf("A media total do semestre eh: %f, com conceito A\n", media);
    }


    return 0;
}
