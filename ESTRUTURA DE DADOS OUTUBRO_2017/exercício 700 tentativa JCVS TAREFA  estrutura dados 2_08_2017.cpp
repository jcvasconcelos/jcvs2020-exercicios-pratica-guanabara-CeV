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
#include <stdlib.h>


int main () {
	
		int ventor[]={7, 6, 5, 4, 3, 2, 1}; 		// declara��o de um vetor
	
	int *pventor;
	int n;
	n=0;
	pventor=&ventor[n];
	
	for (n=6; n>0; n--) {
		
		printf("%d \n", *(pventor+n));
	// 	printf("%d \n", (pventor+n)); 
	// 					originalmente eu tinha deixado a linha acima, 
	// 					mas ficava muito feio!
		printf("%d \n", &ventor[n]);
		
	}

	
	system("pause");
	return 0;
	
	
	
	 } 
	
	
	
		
		


