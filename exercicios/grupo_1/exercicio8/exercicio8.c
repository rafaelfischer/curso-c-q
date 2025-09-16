/*
  	Objetivo do programa: 	Você está montando um cadastro para uma empresa de vendas na internet, e precisa fornecer este "formulário de dados de clientes". 
						  	Não se preocupe neste momento se irá ou não guardar este dado em algum lugar. 
							Pergunte e obtenha os seguintes dados e depois exiba todos na tela:
								- Nome Completo
								- Data de Nascimento
								- Cidade/Pais de Origem(Nascimento)
								- Endereco completo de onde mora
								- Pais onde reside
								- Data do Cadastro
								- Escolaridade: (Ensino Básico/Ensino Fundamental/Ensino Superior) 
	Data da criacao: 2025-08-28
	Criado por: @programacaomentoria
	Ultima atualizacao: 2025-09-15
	Alterado por: @rafaelfischer
*/
#include <stdio.h>
int main() {
	char nomeCompleto[255], 
		dataNascimento[11], 
		cidadePaisOrigem[255], 
		enderecoCompleto[255], 
		paisResidencia[255], 
		dataCadastro[11], 
		escolaridade[255];

	int diaNascimento, mesNascimento, anoNascimento,
		diaCadastro, mesCadastro, anoCadastro;

	printf("Exercicio 8 - Cadastro de Clientes\n");
	printf("-------------------\n");

	printf("Nome Completo: ");
	fgets(nomeCompleto, sizeof(nomeCompleto), stdin);

	printf("Data de Nascimento: ");
	fgets(dataNascimento, sizeof(dataNascimento), stdin);
	// sscanf(dataNascimento, "%d/%d/%d", &diaNascimento, &mesNascimento, &anoNascimento);	// Extraindo dia, mes e ano da data de nascimento
	
	printf("Cidade/Pais de Origem (Nascimento): ");
	fgets(cidadePaisOrigem, sizeof(cidadePaisOrigem), stdin);
	
	printf("Endereco completo de onde mora: ");
	fgets(enderecoCompleto, sizeof(enderecoCompleto), stdin);
	
	printf("Pais onde reside: ");
	fgets(paisResidencia, sizeof(paisResidencia), stdin);
	
	printf("Data do Cadastro: ");
	fgets(dataCadastro, sizeof(dataCadastro), stdin);
	// sscanf(dataCadastro, "%d/%d/%d", &diaCadastro, &mesCadastro, &anoCadastro);

	printf("Escolaridade (Ensino Básico/Ensino Fundamental/Ensino Superior): ");
	fgets(escolaridade, sizeof(escolaridade), stdin);


	printf("\n============================\n");
	printf("Dados do Cliente Cadastrado:\n");
	printf("============================\n");
	printf("Nome Completo: %s", nomeCompleto);
	// printf("Data de Nascimento: %02d/%02d/%04d\n", diaNascimento, mesNascimento, anoNascimento);
	printf("Data de Nascimento: %s", dataNascimento);
	printf("Cidade/Pais de Origem: %s", cidadePaisOrigem);
	printf("Endereco Completo: %s", enderecoCompleto);
	printf("Pais de Residencia: %s", paisResidencia);
	// printf("Data do Cadastro: %02d/%02d/%04d\n", diaCadastro, mesCadastro, anoCadastro);
	printf("Data do Cadastro: %s", dataCadastro);
	printf("Escolaridade: %s", escolaridade); 
	return 0;
}