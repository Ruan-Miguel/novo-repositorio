#include<stdio.h>
#include<stdlib.h>
#include"filaec.h"

int main() {
	int opcao;
	Filaec *fila=criaFilaec();
	do{
		printf("inserir(1), retirar(2), sair(3):");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				insereTad(fila);
				break;
			case 2:
				retiraTad(fila);
				break;
			case 3:
				break;
			default:
				printf("voce informou uma opcao invalida");
		}
		system("pause");
		system("cls");
	}while(opcao!=3);
	return 0;
}
