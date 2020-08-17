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

#include <iostream>
#define MAX 7
using namespace std;

int main() {
	// inicializa ponteiro e o vetor
	int *ponteiro, vetor[8] = {1,2,3,4,5,6,7,8};
	//ponteiro passa apontar para o vetor
	ponteiro = vetor;
	
	//laço de repetição for pra fazer a inversão dos números 
	for(int x=MAX; x>-1; x--)
	cout << "Endereco: " << ponteiro+x << " Valor: " << *(ponteiro+x) << endl;
	// mensagem na tela mostrando o endereço e a posição dos seguintes vetores armazenados.
	
	return 0;
}

