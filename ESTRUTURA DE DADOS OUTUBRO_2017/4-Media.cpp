/*##############################################
Rafael Catelan do Nascimento             
Cadeira: Estrutura de dados  
Algoritmo: Aloca um vetor dinamicamente e faz a media dos elementos
Data:09/2017
##############################################*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main () {
//Declaram um ponteiro nulo
int n,*vetor = NULL;
float media=0;
//Le o tamanho do vetor desejado
printf("Digite a quantidade numeros\n");
scanf("%d",&n);
//Aloca dinamicamente o vetor para ficar com o tamanho "n" desejado
vetor = (int*) malloc(n* sizeof(int));

for (int i = 0; i < n; ++i) {
	printf("Digite o elemento %d\n",i);
	scanf("%d",&vetor[i]);
	//Acumula os valores lidos na variavel media
	media+=vetor[i];
}
//Divide o valor acumulado pelo numero de elementos "n"
media/=n;

for (int i = 0; i < n; ++i) {	
	printf("Vetor[%d]=%d\n",i,vetor[i]);
}
printf("\nA media dos elementos do vetor=%.2f\n",media);
//Libera a memoria utilizada
free(vetor);

system("pause");
}
