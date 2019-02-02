#include<stdio.h>
#include<stdlib.h>
#include"pilha.h"

int main(){
	Pilha *pilha=criaPilha();
	int escolha=0;
	do{
		printf("escolha entre empilhar(1), desempilhar(2) ou sair(3):");
		scanf("%d",&escolha);
		switch(escolha){
			case 1:
				push(pilha);
				break;
			case 2:
				pop(pilha);
				break;
			case 3:
				break;
			default:
				printf("voce informou um numero invalido");
		}
		system("pause");
		system("cls");
	}while(escolha!=3);
	return 0;
}
