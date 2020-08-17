/*

		PROVA 1 ~ ESTRUTURA DE DADOS  ~  PROFESSOR FELIPE GHISLENI FREITAS 
		
		EXERC�CIO 8

=			Utilizando o conceito de prot�tipos, escreva um programa com 5 op��es: 
=			4 para realizar as opera��es matem�ticas b�sicas, e 1 para encerrar o programa. 
=			Ex: 1 � Adi��o
=			    2 � Subtra��o	
=				3 � Multiplica��o 	
=				4 � Divis�o 
=			    0 � Sair 

	
		Aluno: JO�O CARLOS VASCONCELOS ~ CNEC Santo �ngelo - RS ~ 2017 
		
*/

#include <stdio.h>
#include <stdlib.h>

char tecla;														//AQUI declarei as vari�veis globais		
float a, b, r;													//AQUI declarei as vari�veis globais


int calculo(void);												//j� aqui vem a declara��o dos prot�tipos das fun��es
int opcao = 0;

int main () {
	
	while(opcao !=5) {											//Este � o famoso MENUZINHO
		
		system("cls");
						
						printf("1~ ADICAO\n\n");
						
						printf("2~ SUBTRACAO\n\n");
						
						printf("3~ MULTIPLICACAO\n\n");
						
						printf("4~ DIVISAO\n\n");
						
						printf("5~ SAIR\n\n");
						
						printf("\n\t SELECIONE uma opcao: ");
															
																	//e aqui vem a vari�vel que vai ler a opcao desejada
		scanf("%i", &opcao); setbuf(stdin, NULL); 					// esse SETBUFF � bem importante, porque ele que limpa buffer 
		
		if(opcao!=5) {
			
			switch(opcao) {
				
				case 1: calculo(); break;
			
				case 2: calculo(); break;
				
				case 3: calculo(); break;
			
				case 4: calculo(); break;
			
				default: printf("A TECLA NAO EH VALIDA, pressione enter\n");
				
				 setbuf(stdin, NULL); while((tecla = getchar()) != '\r')
				
			break;
			}
		}
	}
	return 0;
}

void entrada(void) {								//ESSA � A FUN��O que vai ler os valores INSERIDOS
		
			printf("\nDetermine o valor para A: ");
			
			scanf("%f",&a); setbuf(stdin, NULL);
			
			printf("\nDetermine o valor para B: ");
			
			scanf("%f",&b); setbuf(stdin, NULL);
	
	return;
}

void saida(void) {									// Essa � a FUN��O que vai MOSTRAR o resultado
	
		printf("Resultado entre A e B eh: %6.2f",r);
	
			setbuf(stdin, NULL); while((tecla = getchar()) != '\r')  //pra limpar o buff, limpar o teclado
 	
	 return;
}

int calculo(void) {									// Essa fun��o vai pegar a entrada dos valores e dependendo 
													// da op�ao escolhida ela ir� realizar a opera��o
			entrada();
			
			if(opcao == 1)  {
		
				r=a+b;
			saida();
		} 
		
		else if(opcao == 2) {
		
			r = a-b;
		saida();
		} 
		
		else if(opcao == 3) {
		
			r = a * b;
		saida();
		} 
		
		else if(opcao == 4) {
			
			if(b == 0) {
				printf("ERRO DE DIVISAO\n");
				
				setbuf(stdin, NULL); while((tecla = getchar()) != '\r')
			return 0;
			} 
			
			else {
				
				r = a / b;
			saida();
			}
	}
return 0;
}
