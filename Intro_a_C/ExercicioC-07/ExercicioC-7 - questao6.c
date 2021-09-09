/*
 ============================================================================
 Name        : ExercicioC-7 - questao6.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : Programa em C que apresenta na tela progressões aritméticas ou
               geométricas, de acordo com as entradas do usuário.
 ============================================================================
 */

 #include <stdio.h>
 #include <math.h>

int main(void){
    char c;
    int termo1, n, termoN, razao, i;
    double soma;

    printf("Escolha uma das progressoes, digite \'a\' (para aritmetica) ou \'g\' (para geometrica): ");
    scanf("%c", &c);

    printf("Digite o valor do primeiro termo da progressao: ");
    scanf("%d", &termo1);
    printf("Digite o valor da razao da progressao: ");
    scanf("%d", &razao);
    printf("Digite o valor do numero de termos da progressao: ");
    scanf("%d", &n);

    if (c == 'a'){
        for (i = 1 ; i <= n ; i = i + 1){
            termoN = termo1 + ((i - 1) * razao);
            printf("%d\n", termoN);
        }
        soma = ((termo1 + termoN) / 2.0) * n;

    }else if(c == 'g'){
        for (i = 1; i <= n ; i = i + 1){
            termoN = termo1 * (pow(razao,(i - 1)));
            printf("%d\n", termoN);
        }
        soma = (termo1 * (pow(razao,n) - 1)) / (razao - 1);
    }

    printf("Soma dos termos da proressao: %.1lf\n", soma);

 return 0;
}
