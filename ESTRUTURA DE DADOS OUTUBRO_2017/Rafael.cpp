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
