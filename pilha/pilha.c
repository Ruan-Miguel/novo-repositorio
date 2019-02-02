#include<stdio.h>
#include<stdlib.h>
#include"funcionario.h"
#include"pilha.h"

struct nodo{
	TAD *conteudo;
	struct nodo *proximo;
};

struct pilha{
	Nodo *topo;
};

Pilha *criaPilha(){
	Pilha *pilha=(Pilha*)malloc(sizeof(Pilha));
	pilha->topo=NULL;
	return pilha;
}

void push(Pilha *pilha){
	Nodo *novo=(Nodo*)malloc(sizeof(Nodo));
	novo->conteudo=cria_tad();
	insere_tad(novo->conteudo);
	novo->proximo=pilha->topo;
	pilha->topo=novo;
}

void pop(Pilha *pilha){
	if(pilha->topo==NULL){
		printf("a lista esta vazia");
	}else{
		Nodo *aux=pilha->topo;
		imprime_tad(aux->conteudo);
		pilha->topo=aux->proximo;
		free(aux->conteudo);
		free(aux);
	}
}
