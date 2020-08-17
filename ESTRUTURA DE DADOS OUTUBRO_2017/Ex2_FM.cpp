/*
	Exercicio 2
	Felipe Menegat
*/

#include <stdlib.h>
#include <stdio.h>

int main (){
	int vet[] = {220, 210, 190, 180, 170, 160, 150,140}; //VETOR
	int *pu; //PONTEIRO
	int d; //DECREMENTAR
	d=0;
	pu = &vet[d];
	for(d=8;d>=0;d--){
	printf("%d\n", *(pu+d));
	printf("%d\n", (pu+d));	
	printf("%d\n", &vet[d]);
	}	
	
	system ("pause");
	return 0;
}
