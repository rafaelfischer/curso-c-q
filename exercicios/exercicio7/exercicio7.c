/*
  	Objetivo do programa: Calcule a área de um retângulo
							Area = comprimento * altura
    Data da criacao: 2025-08-28
    Criado por: @programacaomentoria
    Alterado por: @rafaelfischer
*/
#include <stdio.h>
int main() {
	float comprimento, altura, area;

	printf("Calculo da area de um retangulo\n");
	printf("-------------------------------\n");

	printf("Informe o comprimento: ");
	scanf("%f", &comprimento);
	printf("Informe a altura: ");
	scanf("%f", &altura);

	area = comprimento * altura;
	printf("A area do retangulo é: %.2f", area);
	return 0;
}