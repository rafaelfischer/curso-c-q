/*
  	Objetivo do programa: Calcule a área de um círculo com base no raio informado.
							Como calcular: A = PI . R ao quadrado
    Data da criacao: 2025-08-28
    Criado por: @programacaomentoria
    Alterado por: @rafaelfischer
*/
#include <stdio.h>
int main() {
	const float pi = 3.14159f;
	float raio, area;

	printf("Exercicio 6 - Calculo da area de um circulo\n");
	printf("------------------------------------------\n");

	printf("Informe o valor do raio: ");
	scanf("%f", &raio);
	
	area = pi * (raio * raio);
	printf("A area do circulo de raio %.2f é: %.2f", raio, area);
	return 0;
}