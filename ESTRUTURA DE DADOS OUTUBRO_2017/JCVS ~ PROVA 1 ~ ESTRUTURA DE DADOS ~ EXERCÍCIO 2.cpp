/*

		PROVA 1 ~ ESTRUTURA DE DADOS  ~  PROFESSOR FELIPE GHISLENI FREITAS 
		
		EXERCÍCIO 2

=			Escreva um programa que contenha um vetor de inteiros e 	 
=		imprima os seus elementos na ordem inversa, 	
=		endereçando os elementos com um ponteiro.	
=			     	
=				  	
=			  
=			
		Aluno: JOÃO CARLOS VASCONCELOS ~ CNEC Santo Ângelo - RS ~ 2017 
				
*/

#include <iostream>
#include <stdio.h>

	using namespace std;				//utilizado para definir todas as funções da biblioteca padrão
											//eh um escopo que vc cria para agrupar classes e 
											//funcoes que sejam referentes a um mesmo contexto ou funcionalidade.
										
										
			class objeto 					// definir uma classe apenas para acessar 
												// o objeto que aparece como público.
{
	public:
											//alocação dinâmica para o ponteiro e incrementa os valores
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
													
		objeto * show = new objeto();				// aqui ele cria uma instância para o objeto 
													
		
		show->inverso();							// aqui vai acessar a função e mostrar o que contém dentro dela.
	
	return 0;
}
