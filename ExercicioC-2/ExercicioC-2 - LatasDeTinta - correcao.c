/**
 ============================================================================
 Name        : latasDeTinta.c
 Author      : lincoln
 Version     : 1.0
 Description : Programa calcula a quantidade de latas de tinta necessarias 
  			   para pintar uma parede.
 ============================================================================
 */
#include <stdio.h>

int main(){
	/* definicao das varias, todas numeros reais. */
	float largura, altura, area;
    float rendimentoTinta, volumeLata;
    float litrosNecessarios, latasNecessarias;
    
    printf("Vamos calcular quantas latas de tintas sao necessarias...\n\n");
    /* Leitura das informacoes. Eh importante informar a unidade de medida. */
    printf("Digite a largura da parede em metros: ");
    scanf("%f", &largura);
    printf("Digite a altura da parede em metros: ");
    scanf("%f", &altura);
    area = largura * altura;
    printf("OK, sera pintada uma area de %.2fm2.\n\n", area);
    
    printf("Digite o rendimento da tinta em m2/l: ");
    scanf("%f", &rendimentoTinta);
    litrosNecessarios = area / rendimentoTinta;
    printf("OK, voce precisara de %.1f litros.\n\n", litrosNecessarios);
    
    printf("Digite o volume de cada lata de tinta em litros: ");
    scanf("%f", &volumeLata);
    latasNecessarias = litrosNecessarios / volumeLata;
    printf("Pronto, compre %.1f latas.\n", latasNecessarias);

    return 0;
}
