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


//Exercicio18
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,media;
	printf ("DIGITE O VALOR DA PRIMEIRA NOTA\n");
	scanf ("%d",& a);
	printf ("DIGITE O VALOR DA SEGUNDA NOTA\n");
	scanf ("%d",& b);
	printf ("DIGITE O VALOR DA TERCEIRA NOTA\n");
	scanf ("%d",& c);
	printf ("DIGITE O VALOR DA QUARTA NOTA\n");
	scanf ("%d",& d);
	media =(a+b+c+d)/4;
	if (media >=7) 
   		{                                                              
   			printf ("VOCE FOI APROVADO SUA MEDIA FINAL E %d", media);
   			getch();                             
   		}
	else
    		{ 
      			printf ("VOCE FOI REPROVADO SUA MEDIA FINAL E %d", media);
                getch();
     		}
                                
}
                 
