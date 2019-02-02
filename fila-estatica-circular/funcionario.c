#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"funcionario.h"

struct funcionario{
	char nome[100];
	char cpf[20];
	int idade;
	float salario;
};

TAD *cria_tad(int tamanho){
	return (TAD*)calloc(tamanho,sizeof(TAD));
}

void insere_tad(TAD *novo,int local){
	fflush(stdin);
	printf("informe o nome do funcionario:");
	gets(novo[local].nome);
	printf("informe o cpf do funcionario:");
	gets(novo[local].cpf);
	printf("informe a idade do funcionario:");
	scanf("%d",&novo[local].idade);
	printf("informe o salario do funcionario: R$ ");
	scanf("%f",&novo[local].salario);
}

void imprime_tad(TAD *atual,int local){
	printf("nome: %s\n",atual[local].nome);
	printf("cpf: %s\n",atual[local].cpf);
	printf("idade: %d\n",atual[local].idade);
	printf("salario: R$ %.2f\n",atual[local].salario);
}

void retorna_nome(TAD *funcionario,char nome[100]){
	strcpy(nome,funcionario->nome);
}

