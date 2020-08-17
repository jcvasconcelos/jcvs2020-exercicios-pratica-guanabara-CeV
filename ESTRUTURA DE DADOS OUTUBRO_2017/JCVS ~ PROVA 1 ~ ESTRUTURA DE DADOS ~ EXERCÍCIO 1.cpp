/*

		PROVA 1 ~ ESTRUTURA DE DADOS  ~  PROFESSOR FELIPE GHISLENI FREITAS 
		
=		EXERC�CIO ~ 1
=		Pratique a declara��o e manipula��o de ponteiros. 

=		Defina e inicialize uma vari�vel inteira. 
=		Defina um ponteiro para inteiro e aponte-o para a vari�vel declarada e inicializada anteriormente. 
=		Imprima os seguintes valores: 

=		Valor da vari�vel 
=		Endere�o da vari�vel 
=		Valor do ponteiro (endere�o da vari�vel) 
=		Valor da vari�vel para qual o ponteiro est� apontando (operador de valor �*�) 
=		Endere�o do ponteiro 
=		Modifique o valor da vari�vel atrav�s do ponteiro. 
=		Imprima os valores descritos acima novamente.

		Aluno: JO�O CARLOS VASCONCELOS ~ CNEC Santo �ngelo - RS ~ 2017 

*/

#include <stdio.h>
#include <locale.h>

	int main(void) {
					setlocale(LC_ALL, "Portuguese");
	
																			//aqui coloco  as vari�veis int e ponteiro
	int x = 2, *ponteiro_amostra;
			
	ponteiro_amostra = &x;													//ponteiro recebe o endere�o da vari�vel X
	
			printf("Endere�o da vari�vel | Valor da vari�vel\n");			//a partir daqui eu come�o a imprimir os valores e endere�os das vari�veis
			printf("----> %i        |       %i     <--\n",&x, x);
	
			printf("Endere�o do ponteiro | Valor do ponteiro\n");
			printf("----> %i        |       %i     <--\n",ponteiro_amostra, *ponteiro_amostra);

	*ponteiro_amostra +=1;													//aqui modifico o valor da vari�vel atrav�s do ponteiro 
	
			printf("Endere�o da vari�vel | Valor da vari�vel\n");
			printf("----> %i        |       %i     <--\n",&x+1, x);
		
			printf("Endere�o do ponteiro | Valor do ponteiro\n");
			printf("----> %i        |       %i     <--\n",ponteiro_amostra+1, *ponteiro_amostra);

	
	
		getchar();
	
	return 0;
}
