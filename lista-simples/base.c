#include<stdio.h>
#include"lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int escolha;
	Nodo **inicio=cria_lista();
	while(escolha!=6){
		system("pause");
		system("cls");
		printf("inserir(1), retirar(2), alterar(3), imprimir um contato(4), imprimir todos os contatos(5), ou sair(6):");
		scanf("%d",&escolha);
		switch(escolha){
			case 1:
				insere(inicio);
				break;
			case 2:
				retira(inicio);
				break;
			case 3:
				altera(inicio);
				break;
			case 4:
				imprime(inicio);
				break;
			case 5:
				imprime_todos(inicio);
				break;
			case 6:
				break;
			default:
				printf("voce informou um numero invalido");
		}
	}
}
