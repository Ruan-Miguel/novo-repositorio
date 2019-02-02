#include<stdio.h>
#include<stdlib.h>
#include"funcionario.h"
#include"filaec.h"

#define tamMax 10

int inicio=0;
int numComponentes=0;

struct filaec {
	TAD *vetorPrincipal;
};

Filaec *criaFilaec(){
	Filaec *fila=(Filaec*)malloc(sizeof(Filaec));
	fila->vetorPrincipal=cria_tad(tamMax);
	return fila;
}

int fila_vazia(){
	if(!numComponentes){
		return 1;
	}
	return 0;
}

int fila_cheia(){
	if(numComponentes==tamMax){
		return 1;
	}
	return 0;
}

void insereTad(Filaec *fila){
	if(fila_cheia()){
		printf("a fila esta cheia");
	}else{
		int local;
		if(inicio+numComponentes>=tamMax){
			local=inicio+numComponentes-tamMax;
		}else{
			local=inicio+numComponentes;
		}
		insere_tad(fila->vetorPrincipal,local);
		numComponentes++;
	}
}

void retiraTad(Filaec *fila){
	if(fila_vazia()){
		printf("a fila esta vazia");
	}else{
		imprime_tad(fila->vetorPrincipal,inicio);
		if(inicio==tamMax-1){
			inicio=0;
		}else{
			inicio++;
		}
		numComponentes--;
	}
}
