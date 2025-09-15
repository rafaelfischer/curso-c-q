/*
    Objetivo do programa: Calcule o quadrado de um número
    Data da criacao: 2025-08-28
    Criado por: @programacaomentoria
    Alterado por: @rafaelfischer
*/
#include <stdio.h>
int main() {
	float numero, quadrado;

	printf("Programa para calcular o quadrado de um numero\n");
	printf("----------------------------------------------\n");

	printf("Digite um numero: ");
	scanf("%f", &numero);

	quadrado = numero * numero;
	printf("O quadrado de %.2f e: %.2f\n", numero, quadrado);
	return 0;
}