/*##############################################
Rafael Catelan do Nascimento             
Cadeira: Estrutura de dados 
Algoritmo: Aloca um vetor dinamicamente 
Data:09/2017
##############################################*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Funcao recebe o vetor e o seu tamanho "n" e imprime todos os elementos
void print_vetor (int vetor[],int n) {

	for (int i = 0; i < n; ++i)
	{	
	printf("Vetor[%d]=%d\n",i,vetor[i]);
	}
}

int main () {

//Declaram um ponteiro nulo
int n,*vetor = NULL;
//Le o tamanho do vetor desejado
printf("Digite a quantidade numeros\n");
scanf("%d",&n);

//Aloca dinamicamente o vetor para ficar com o tamanho "n" desejado
vetor = (int*) malloc(n* sizeof(int));

//Atribui um valor aleatorio para cada elemento do vetor de 0 a 100
srand ( time(NULL) );
for (int i = 0; i < n; ++i)
{
	vetor[i]=1 + rand()%100;
}

//Manda o vetor para a funcao print_vetor
print_vetor(vetor,n);
//Libera a memoria utilizada 
free(vetor);

system("pause");
}
