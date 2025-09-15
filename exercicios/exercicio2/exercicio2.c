/*
    Objetivo do programa: Perguntar o nome de quem está usando o programa e sua idade. Faça duas perguntas.
    Data da criacao: 2025-08-28
    Criado por: @programacaomentoria
    Alterado por: @rafaelfischer
*/
#include <stdio.h>
int main() {
	char nome[200];
	int idade;
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Ola, %s! Voce tem %d anos.\n", nome, idade);
}