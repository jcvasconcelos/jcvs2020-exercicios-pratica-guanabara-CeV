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


#include <stdio.h>
int main () {
int num,valor;
int *p;
num=55;
p=&num; /* Pega o endere�o de num */
valor=*p; /* Valor e igualado a num indiretamente */
printf ("\n\n%d\n",valor);
printf ("Endereco para onde o ponteiro aponta: %p\n",p);
printf ("Valor da variavel apontada: %d\n",*p);
return(0);
}
