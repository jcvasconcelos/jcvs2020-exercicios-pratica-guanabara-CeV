/*

		PROVA 1 ~ ESTRUTURA DE DADOS  ~  PROFESSOR FELIPE GHISLENI FREITAS 
		
=		EXERCÍCIO ~ 1
=		Pratique a declaração e manipulação de ponteiros. 

=		Defina e inicialize uma variável inteira. 
=		Defina um ponteiro para inteiro e aponte-o para a variável declarada e inicializada anteriormente. 
=		Imprima os seguintes valores: 

=		Valor da variável 
=		Endereço da variável 
=		Valor do ponteiro (endereço da variável) 
=		Valor da variável para qual o ponteiro está apontando (operador de valor “*”) 
=		Endereço do ponteiro 
=		Modifique o valor da variável através do ponteiro. 
=		Imprima os valores descritos acima novamente.

		Aluno: JOÃO CARLOS VASCONCELOS ~ CNEC Santo Ângelo - RS ~ 2017 

*/

#include <stdio.h>
#include <locale.h>

	int main(void) {
					setlocale(LC_ALL, "Portuguese");
	
																			//aqui coloco  as variáveis int e ponteiro
	int x = 2, *ponteiro_amostra;
			
	ponteiro_amostra = &x;													//ponteiro recebe o endereço da variável X
	
			printf("Endereço da variável | Valor da variável\n");			//a partir daqui eu começo a imprimir os valores e endereços das variáveis
			printf("----> %i        |       %i     <--\n",&x, x);
	
			printf("Endereço do ponteiro | Valor do ponteiro\n");
			printf("----> %i        |       %i     <--\n",ponteiro_amostra, *ponteiro_amostra);

	*ponteiro_amostra +=1;													//aqui modifico o valor da variável através do ponteiro 
	
			printf("Endereço da variável | Valor da variável\n");
			printf("----> %i        |       %i     <--\n",&x+1, x);
		
			printf("Endereço do ponteiro | Valor do ponteiro\n");
			printf("----> %i        |       %i     <--\n",ponteiro_amostra+1, *ponteiro_amostra);

	
	
		getchar();
	
	return 0;
}
