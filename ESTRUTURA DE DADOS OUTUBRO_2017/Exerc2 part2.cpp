/*

		PROVA 1 ~ ESTRUTURA DE DADOS  ~  PROFESSOR FELIPE GHISLENI FREITAS 
		
		EXERC�CIO 

=			 
=			
=			
=			     	
=				  	
=				  
=			     

	
		Aluno: JO�O CARLOS VASCONCELOS ~ CNEC Santo �ngelo - RS ~ 2017 
				
*/

#include <iostream>
#define MAX 7
using namespace std;

int main() {
	// inicializa ponteiro e o vetor
	int *ponteiro, vetor[8] = {1,2,3,4,5,6,7,8};
	//ponteiro passa apontar para o vetor
	ponteiro = vetor;
	
	//la�o de repeti��o for pra fazer a invers�o dos n�meros 
	for(int x=MAX; x>-1; x--)
	cout << "Endereco: " << ponteiro+x << " Valor: " << *(ponteiro+x) << endl;
	// mensagem na tela mostrando o endere�o e a posi��o dos seguintes vetores armazenados.
	
	return 0;
}

