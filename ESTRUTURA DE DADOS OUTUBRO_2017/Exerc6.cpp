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

/* Terneiros
O pre�o m�dio por animal. 
O pre�o m�dio por animal acima da m�dia e o pre�o m�dio por animal abaixo da m�dia.  
 Created By and 20/09/2017
*/
#include <stdio.h>
#include <stdlib.h>

int calcular(float *vet, float tamanho, float peso, float media) {
	int contador = 0, contador2 = 0;
	// pega o numero informado
	fprintf(stdout, "Informe o numero de terneiros: ");
	scanf("%f", &tamanho);
	// faz aloca��o din�mica
	vet = (float *)malloc(tamanho *sizeof(float));
	//verifica se h� loca�ao dispon�vel caso houver condi��o ir� alocar.
	if(vet != NULL) {
	// laco de repeticao pra percorrer os dados
	for(int x = 0; x < tamanho; x++) {
		fprintf(stdout, "Informe o %i peso: ",x+1);
		scanf("%f", &vet[x]); setbuf(stdin, NULL);
		peso+=vet[x];
	} 	//exibe peso dos terneiros
		for(int x = 0; x < tamanho; x++)
		fprintf(stdout, "\nPeso do %i terneiro = %.2f\n", x+1 , *(vet+x));
		// faz a media e armazena na variavel
		media = peso/tamanho;
		fprintf(stdout,"---------------------------\nMedia dos terneiros: %6.2f\n",media);
		// um for para percorrer as condi��es e tamb�m dois contadores para armazenar os terneiros acima da media e a baixo.
		for(int x = 0; x < tamanho; x++) {
			if(vet[x] < media) {
			contador++;
		}
		 if(vet[x] > media)  {
			contador2++;
			}
		} 
		fprintf(stdout, "terneiros abaixo da media: %i\n", contador);
		fprintf(stdout, "terneiros acima da media: %i\n",  contador2);
		printf("\n");
		
		//verifica��o do pre�o do terneiro comparando com a m�dia
		int contapreco = 0, contapreco2 = 0;
		for(int x = 0; x < tamanho; x++) {
			fprintf(stdout, "Informe o preco conforme o peso do terneiro: ",x+1);
			scanf("%f", &vet[x]); setbuf(stdin, NULL);
			if(vet[x] < media)
			contapreco++;
			if(vet[x] > media)
			contapreco2++;
		}
		fprintf(stdout, "\npreco abaixo da media: %i\n", contapreco);
		fprintf(stdout, "preco acima da media: %i\n", contapreco2);
		
} else {
	fprintf(stdout, "houve um erro\n");
	getchar();
}
	// limpa memory
	free(vet);
} 

int main(void) {
	//var para pssar como parametros inicalizdas
	float vet[0], tamanho, peso, media;
	//chama fun��o e faz a passagem
	calcular(vet, tamanho, peso, media);
	
	return 0;
}
