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


#include <stdio.h>
int main () {
int num,valor;
int *p;
num=55;
p=&num; /* Pega o endereço de num */
valor=*p; /* Valor e igualado a num indiretamente */
printf ("\n\n%d\n",valor);
printf ("Endereco para onde o ponteiro aponta: %p\n",p);
printf ("Valor da variavel apontada: %d\n",*p);
return(0);
}
