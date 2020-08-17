/*

		PROVA 1 ~ ESTRUTURA DE DADOS  ~  PROFESSOR FELIPE GHISLENI FREITAS 
		
		EXERC�CIO 2

=			Escreva um programa que contenha um vetor de inteiros e 	 
=		imprima os seus elementos na ordem inversa, 	
=		endere�ando os elementos com um ponteiro.	
=			     	
=				  	
=			  
=			
		Aluno: JO�O CARLOS VASCONCELOS ~ CNEC Santo �ngelo - RS ~ 2017 
				
*/

#include <iostream>
#include <stdio.h>

	using namespace std;				//utilizado para definir todas as fun��es da biblioteca padr�o
											//eh um escopo que vc cria para agrupar classes e 
											//funcoes que sejam referentes a um mesmo contexto ou funcionalidade.
										
										
			class objeto 					// definir uma classe apenas para acessar 
												// o objeto que aparece como p�blico.
{
	public:
											//aloca��o din�mica para o ponteiro e incrementa os valores
		void inverso() {
			int *ponteiro = new int [10];
			
			for(int x=1; x<10; x++)
			
			ponteiro[x] = x;
			
													
			for(int x=9; x>-0; x--)					//faz a ordem inversa dos valores
			
			printf("\t[%i]\n\n", ponteiro[x]);
			
			delete[] ponteiro;
		}
};

int main() {
													
		objeto * show = new objeto();				// aqui ele cria uma inst�ncia para o objeto 
													
		
		show->inverso();							// aqui vai acessar a fun��o e mostrar o que cont�m dentro dela.
	
	return 0;
}
