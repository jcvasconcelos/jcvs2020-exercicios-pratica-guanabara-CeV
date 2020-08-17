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

/*
Faça um programa em C que solicite ao usuário o número de funcionários em uma empresa.
O programa deve alocar dinamicamente um vetor para armazenar: os nomes, os cpf, e a média
do valor salarial do primeiro trimestre(mês 1 a mês 2 e a mês 3(+ bonificação de 20%)) de todos
os funcionários. Ao final da execução, o programa deve exibir a média da remuneração mensal
dos funcionários e liberar a memória utilizada.
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
	
	//alocação dinamica para estrutura
	vet = (Dados *)malloc(tamanho*sizeof(Dados));
	
	//pega as inforamções
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
	//chama função e passa como parametro a estrutura denifina no escopo.
	inicia_dados(vet);
	
	return 0;
}
