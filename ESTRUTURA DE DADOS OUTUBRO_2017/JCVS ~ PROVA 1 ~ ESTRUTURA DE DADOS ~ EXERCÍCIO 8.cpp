/*

		PROVA 1 ~ ESTRUTURA DE DADOS  ~  PROFESSOR FELIPE GHISLENI FREITAS 
		
		EXERCÍCIO 8

=			Utilizando o conceito de protótipos, escreva um programa com 5 opções: 
=			4 para realizar as operações matemáticas básicas, e 1 para encerrar o programa. 
=			Ex: 1 – Adição
=			    2 – Subtração	
=				3 – Multiplicação 	
=				4 – Divisão 
=			    0 – Sair 

	
		Aluno: JOÃO CARLOS VASCONCELOS ~ CNEC Santo Ângelo - RS ~ 2017 
		
*/

#include <stdio.h>
#include <stdlib.h>

char tecla;														//AQUI declarei as variáveis globais		
float a, b, r;													//AQUI declarei as variáveis globais


int calculo(void);												//já aqui vem a declaração dos protótipos das funções
int opcao = 0;

int main () {
	
	while(opcao !=5) {											//Este é o famoso MENUZINHO
		
		system("cls");
						
						printf("1~ ADICAO\n\n");
						
						printf("2~ SUBTRACAO\n\n");
						
						printf("3~ MULTIPLICACAO\n\n");
						
						printf("4~ DIVISAO\n\n");
						
						printf("5~ SAIR\n\n");
						
						printf("\n\t SELECIONE uma opcao: ");
															
																	//e aqui vem a variável que vai ler a opcao desejada
		scanf("%i", &opcao); setbuf(stdin, NULL); 					// esse SETBUFF é bem importante, porque ele que limpa buffer 
		
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

void entrada(void) {								//ESSA É A FUNÇÃO que vai ler os valores INSERIDOS
		
			printf("\nDetermine o valor para A: ");
			
			scanf("%f",&a); setbuf(stdin, NULL);
			
			printf("\nDetermine o valor para B: ");
			
			scanf("%f",&b); setbuf(stdin, NULL);
	
	return;
}

void saida(void) {									// Essa é a FUNÇÃO que vai MOSTRAR o resultado
	
		printf("Resultado entre A e B eh: %6.2f",r);
	
			setbuf(stdin, NULL); while((tecla = getchar()) != '\r')  //pra limpar o buff, limpar o teclado
 	
	 return;
}

int calculo(void) {									// Essa função vai pegar a entrada dos valores e dependendo 
													// da opçao escolhida ela irá realizar a operação
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
