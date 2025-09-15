/*
    Objetivo do programa: Perguntar o nome de um aluno, pergunte as 4 notas e calcule a média aritmética, exibindo no final.
    Data da criacao: 2025-08-28
    Criado por: @programacaomentoria
    Alterado por: @rafaelfischer
*/
#include <stdio.h>
int main() {
	char nome[50];
	float nota1, nota2, nota3, nota4;
	float media;

	printf("Exercicio 3 - Calculo de media aritmetica\n");
	printf("-----------------------------------------\n");
	printf("Digite o nome do aluno: ");
	scanf("%s", nome);
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	printf("Digite a quarta nota: ");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	printf("A media do aluno %s e: %.2f\n", nome, media);
}