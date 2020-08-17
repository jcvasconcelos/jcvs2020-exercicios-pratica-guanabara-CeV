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

/*
Fa�a um programa em C que solicite ao usu�rio o n�mero de funcion�rios em uma empresa.
O programa deve alocar dinamicamente um vetor para armazenar: os nomes, os cpf, e a m�dia
do valor salarial do primeiro trimestre(m�s 1 a m�s 2 e a m�s 3(+ bonifica��o de 20%)) de todos
os funcion�rios. Ao final da execu��o, o programa deve exibir a m�dia da remunera��o mensal
dos funcion�rios e liberar a mem�ria utilizada.
 Created By And 20/09/2017
*/
// bibliotecas importadas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>
#define aux 20

typedef struct {
	char nome[30];
	char cpf[15];
	float salario;
	
}Dados;
 //Vet tipo estrutura armazenando max 20 funcionarios
Dados vet[aux];

void inicia_dados(Dados *vet) {
	printf("Informe o numero de funcionarios: ");
	int tamanho = 0;
	scanf("%i", &tamanho); setbuf(stdin, NULL); // limpa buffer
	
	//aloca��o dinamica para estrutura
	vet = (Dados *)malloc(tamanho*sizeof(Dados));
	
	//pega as inforam��es
	if(vet) {
	for(int x=0; x<tamanho; x++) {
	
		fprintf(stdout, "\n\nDigite o Nome: \n----> ");
        fgets(vet[x].nome, 29, stdin); setbuf(stdin,NULL);
        fprintf(stdout, "\n");
        
        fprintf(stdout, "Digite o CPF: \n----> ");
        scanf("%s", &vet[x].cpf); setbuf(stdin, NULL);
        fprintf(stdout, "\n");
        
        fprintf(stdout, "Digite o Salario: \n----> ");
        scanf("%f", &vet[x].salario); setbuf(stdin,NULL);
        fprintf(stdout, "\n");
        
		vet[x].salario = ((vet[x].salario) + (vet[x].salario) + (vet[x].salario)) /3;
		
	}
	//limpa tela e informa
	system("cls");
	for(int x=0; x<tamanho; x++) {
		fprintf(stdout,"Nome: %s",vet[x].nome);
		fprintf(stdout,"CPF: %s\n",vet[x].cpf);	
		fprintf(stdout,"Salario: %.2f\n",vet[x].salario);
		printf("\n");
	} 
} else {
	fprintf(stdout, "houve um erro, nao ha espaco na memoria");
	sleep(1);
	getch();
}
 	free(vet);
}

int main(void) {
	//chama fun��o e passa como parametro a estrutura denifina no escopo.
	inicia_dados(vet);
	
	return 0;
}
