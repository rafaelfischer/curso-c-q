/*
	Objetivo do programa: Calcule a área de um quadrado.
							Como calcular: Area = lado * lado
    Data da criacao: 2025-08-28
    Criado por: @programacaomentoria
    Alterado por: @rafaelfischer
*/
#include <stdio.h>
int main() {
	float lado, area;

	printf("Calculo da area de um quadrado\n");
	printf("-------------------------------\n");

	printf("Digite o valor do lado do quadrado: ");
	scanf("%f", &lado);
	
	area = lado * lado;
	printf("A area do quadrado e: %.2f", area);
	return 0;
}