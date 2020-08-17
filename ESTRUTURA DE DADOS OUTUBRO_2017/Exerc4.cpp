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
/*
Crie um programa que calcula a m�dia de uma quantidade qualquer (informada pelo
usu�rio) de n�meros. O programa deve armazenar esses n�meros em um vetor. Depois, use esse
vetor para mostrar todos os n�meros e mostrar a m�dia dele. Use aloca��o din�mica de
mem�ria para colocar os n�meros no vetor. N�o desperdice mem�ria 
Created by And 20/09/2017
*/

void media(register int *vet, short int tamanho);

int main(void) {
	//inicializa vari�vel
	int *vet, tamanho;
	// chama fun��o e passa os para..
	media(vet,tamanho);
	
	getchar();
	return 0;
}

void media(register int *vet, short int tamanho) {
	// determina o numero que vai calcular e media determinada pelo usuario
	printf("Digite o total de notas: ");
	scanf("%i", &tamanho);
	//aloco
	vet = (int *)malloc(tamanho * sizeof(int));
	// verificou se ha espa�o, ent�o
	if(vet) {
		for(int x=0; x<tamanho; x++) {
			printf("Insira o %i numero: ", x+1);
			scanf("%i", &vet[x]);
		}
		//vai mostrar os numeros lidos e armazenar na variavel media a soma
		float media = 0.0;
		for(int x=0; x<tamanho; x++) {
			printf("\nN: %i\n",vet[x]);
			media+=vet[x];
		}
		// vai mostrar a media
		printf("\tM%cdia: %6.2f",130,media/tamanho);
	} else //sen�o tiver espa�o vai ocorrer um erro
		 printf("N%co ha espa%co na memoria\n",132,135);
		 
		 free(vet); // libera mem�ria
}
