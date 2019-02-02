#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"funcionario.h"
#include"lista.h"

struct nodo{
	TAD *conteudo;
	struct nodo *proximo;
};

Nodo **cria_lista(){
	Nodo **inicio=(Nodo**)malloc(sizeof(Nodo*));
	*inicio=NULL;
	return inicio;
}

void insere(Nodo **inicio){
	Nodo *novo=(Nodo*)malloc(sizeof(Nodo));
	novo->proximo=NULL;
	novo->conteudo=cria_tad();
	insere_tad(novo->conteudo);
	if(*inicio==NULL){
		*inicio=novo;
	}else{
		Nodo *aux=*inicio;
		Nodo *anterior;
		char nome_novo[100],nome_aux[100];
		retorna_nome(novo->conteudo,nome_novo);
		retorna_nome(aux->conteudo,nome_aux);
		while(aux->proximo!=NULL){
			if(strcmp(nome_novo,nome_aux)>0){
				anterior=aux;
				aux=aux->proximo;
				retorna_nome(aux->conteudo,nome_aux);
			}else{
				break;
			}
		}
		if(strcmp(nome_novo,nome_aux)<0){
			novo->proximo=aux;
			if(*inicio!=aux){
				anterior->proximo=novo;
			}else{
				*inicio=novo;
			}
		}else if(strcmp(nome_novo,nome_aux)==0){
			printf("ja ha um funcionario com esse nome");
			free(novo);
		}else{
			aux->proximo=novo;
		}
	}
}

void imprime_todos(Nodo **inicio){
	if(*inicio==NULL){
		printf("a lista esta vazia");
	}else{
		Nodo *aux=*inicio;
		do{
			imprime_tad(aux->conteudo);
			aux=aux->proximo;
		}while(aux!=NULL);
	}
}

void retira(Nodo **inicio){
	char nome[100],nome_aux[100];
	Nodo *aux=*inicio;
	Nodo *anterior=NULL;
	printf("informe o nome de um funcionario:");
	fflush(stdin);
	gets(nome);
	while(aux!=NULL){
		retorna_nome(aux->conteudo,nome_aux);
		if(strcmp(nome,nome_aux)>0){
			anterior=aux;
			aux=aux->proximo;
		}else{
			break;
		}
	}
	if(aux==NULL){
		printf("esse nome nao esta na lista");
	}else if(strcmp(nome,nome_aux)<0){
		printf("esse nome nao esta na lista");
	}else{
		if((*inicio)==aux){
			*inicio=aux->proximo;
		}else{
			anterior->proximo=aux->proximo;
		}
		free(aux->conteudo);
		free(aux);
	}
}

void altera(Nodo **inicio){
	char nome[100],nome_aux[100];
	Nodo *aux=*inicio;
	printf("informe o nome de um funcionario:");
	fflush(stdin);
	gets(nome);
	while(aux!=NULL){
		retorna_nome(aux->conteudo,nome_aux);
		if(strcmp(nome,nome_aux)>0){
			aux=aux->proximo;
		}else{
			break;
		}
	}
	if(aux==NULL){
		printf("esse nome nao esta na lista");
	}else if(strcmp(nome,nome_aux)!=0){
		printf("esse nome nao esta na lista");
	}else{
		insere_tad(aux->conteudo);
	}
}

void imprime(Nodo **inicio){
	char nome[100],nome_aux[100];
	Nodo *aux=*inicio;
	printf("informe o nome de um funcionario:");
	fflush(stdin);
	gets(nome);
	while(aux!=NULL){
		retorna_nome(aux->conteudo,nome_aux);
		if(strcmp(nome,nome_aux)>0){
			aux=aux->proximo;
		}else{
			break;
		}
	}
	if((aux==NULL) || (strcmp(nome,nome_aux)!=0)){
		printf("esse nome nao esta na lista");
	}else{
		imprime_tad(aux->conteudo);
	}
}
