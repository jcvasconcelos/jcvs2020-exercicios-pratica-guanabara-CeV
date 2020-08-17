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
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main () {

int x[7] = {10,20,30,40,50,60,70};
int *ponteiro;

ponteiro=&x[6];


for (int i = 0; i < 7; ++i)
{
	printf("[%d]\n",*ponteiro);
	ponteiro--;
}



system("pause");
}
