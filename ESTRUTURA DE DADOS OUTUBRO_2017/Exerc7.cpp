/*

		PROVA 1 ~ ESTRUTURA DE DADOS  ~  PROFESSOR FELIPE GHISLENI FREITAS 
		
		EXERCÍCIO 

=			 
=			
=			
=			     	
=				  	
=				  
=			     

	
		Aluno: JOÃO CARLOS VASCONCELOS ~ CNEC Santo Ângelo - RS ~ 2017 
				
*/


/*
Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo os seguintes campos: 
marca: string de tamanho 15 
ano: inteiro 
cor: string de tamanho 10 
preço: real 
O programa deve: 
Escrever a definição da estrutura carro. 
Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20 e global. 
Crie um menu para: 
Definir um bloco de programa para ler o vetor vetcarros. 
Definir um bloco de programa que receba um preço e imprima os carros (marca, cor e ano) que tenham preço igual ou menor ao preço recebido. 
Defina um bloco de programa que leia a marca de um carro e imprima as informações de todos os carros dessa marca (preço, ano e cor). 
Defina um bloco de programa que leia uma marca, ano e cor e informe se existe ou não um carro com essas características. Se existir, informar o preço. 
 Created by And 20/09/2017
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <unistd.h>
#define aux 20

typedef struct {
	char cor[10];
	char marca[15];
	float real;
	int ano;
}Dados;

Dados vet[aux];
int top;

//função que vai ler os carros
void ler_carros(Dados *vet) {
	setbuf(stdin, NULL);
	sleep(1); // dormida
	fprintf(stdout, "\nInforme a marca\n----> "); fgets(vet[top].marca, 14, stdin); setbuf(stdin, NULL); //setbuf vai limpar o buffer
	fprintf(stdout, "\nInforme a cor\n----> ");   fgets(vet[top].cor, 9, stdin); setbuf(stdin, NULL);
	fprintf(stdout, "\nInforme o ano\n----> ");   scanf("%i", &vet[top].ano);
	fprintf(stdout, "\nInforme o preco\n----> "); scanf("%f", &vet[top].real);
	top++;
}

// funlçao para exibir os carros
void exibe_carros(Dados *vet) {
	for(int x=0; x<top; x++) {
	fprintf(stdout,"\n---------------");
	fprintf(stdout, "\nMarca: %s\n", vet[x].marca);
	fprintf(stdout, "Cor: %s\n", vet[x].cor);
	fprintf(stdout, "Ano: %i\n", vet[x].ano);
	fprintf(stdout, "Preco: %6.2f\n", vet[x].real);
	fprintf(stdout,"---------------");
	}
	getch();
	sleep(1);
}

// Funçao que vai buscar precos
void preco_carro(Dados *vet) {
	int contador = 0;
	setbuf(stdin, NULL); sleep(1);
	printf("informe o preco do carro: ");
	float preco;
	scanf("%f", &preco);
	
	for(int x=0; x<top; x++) {
	if(vet[x].real <= preco) {
    contador+=1;
	printf("\nCarro encontrado no registro: \n\nMarca: %s\nCor: %s\nAno: %i\nPreco: %.2f\n",vet[x].marca,vet[x].cor, vet[x].ano, vet[x].real);
	}
}
	if(contador == 0)
	printf("Nao foi encontrado nenhum carro com esse preco.\n");
	getch();
}

void busca_carro(Dados *vet) {
	setbuf(stdin, NULL); sleep(1);
	printf("\n\nDigite a marca do carro\n----> ");
	char nome[20];
	gets(nome);
		
	for(int x=0; x<top; x++) {
	if(strcmp(nome, vet[x].marca)==0)
	 	printf("\nCarro encontrado no registro: \n\nMarca: %s\nCor: %s\nAno: %i\nPreco: %.2f\n",vet[x].marca,vet[x].cor, vet[x].ano, vet[x].real);
	}
	getch();
}

int main (void) {
	//variaveis inicializadas
	int num = 0;
	top = 0;
	do {
		system("cls");
		printf("\tMenu\n");
		printf("1) Informar dados\n");
		printf("2) Exibir dados\n");
		printf("3) Buscar dados\n");
		printf("4) Buscar pelo preco\n");
		printf("5) Sair\n");
		printf("\nEscolha uma opcao: ");
		scanf("%i", &num);
		
		switch(num) {
			case 1: //se for menor que o indíce máximo definido então ira registrar.
				if(top<aux) 
				ler_carros(vet);
					else
				printf("\nLimite maximo atingido no cadastro\n");
				break;
			case 2: // se for igual a 0 nao ha usuarios para mostrar
				if(!top)
				printf("\nNao ha dados para exibir\n");
					else
				exibe_carros(vet);
				break;
			case 3: 
				if(!top)
				printf("\nNao ha dados para mostrar\n");
					else 
				busca_carro(vet);
				break;
			case 4: 
				if(!top) 
			 	printf("\nNao ha dados informado\n");
			 		else
			 	preco_carro(vet);
			 	break;
			case 5: exit(1); break;
			
			default: fprintf(stdout, "\ntecla invalida, tecle enter para voltar ao menu\n");
			break;
		}
		sleep(1);
		getch();
} while(num!=5);
	
	return 0;
}
