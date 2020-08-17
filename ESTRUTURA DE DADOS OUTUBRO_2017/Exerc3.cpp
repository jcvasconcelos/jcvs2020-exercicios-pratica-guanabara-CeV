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

#include <iostream>
#include <stdlib.h>
using namespace std;

static void ler(int *vetor, unsigned short int tamanho) {
	// alocacao dinamica
	vetor = (int *)malloc(tamanho * sizeof(int));
	vetor[tamanho];
	
	// preenche o vetor
	if(vetor!= NULL) {
	for(int x=0; x<tamanho; x++) {
		printf("informe o %i numero: ", x+1);
		scanf("%i", &vetor[x]);
	}
		printf("\n");
		// exibe o vetor
	for(int x=0; x<tamanho; x++)
	printf("Numeros informados: %i\n", vetor[x]);
} else  {
	printf("Erro na alocacao de memoria\n");
	exit(1); } 
	
	// limpa memoria
	free(vetor);
}

int main() {
	//inicializamento das variáveis
	int tamanho, vetor[0];
	
	// vai ler o tamanho para preencher o vetor
	printf("Informe o tamanho a ser preenchido no vetor: ");
	scanf("%i", &tamanho);
	
	// vetor passa ter o tamanho que o usuário informou.
	vetor[tamanho];
	
	// chama a função e faz a passagem dos paramêtros
	ler(vetor, tamanho);
	
	getchar();
	return 0;
}
