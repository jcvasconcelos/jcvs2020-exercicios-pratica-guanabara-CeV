
#include <iostream>
#include <stdio.h>                                      // Biblioteca de Entrad e saída e dados 
#include <locale.h>                                    // Biblioteca de acentuações 

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");                 // Definino  localidade como brasileira 
	int i, cn1 = 0, cn3 = 0, cn5 = 0;               //  Declarando variáveis como contadoras do tipo inteiro
	int vet[20];
	
	printf("\n         --------------  Quantas Vezes Repetem? (1, 3 e 5) ------------\n\n\n");
	for(i=0; i<20; i++)
	{
		printf(" Insira os valores [%d]:  ", i, vet[i]);
			scanf("%d", &vet[i]);
	
		if(vet[i] == 1)                          // Compara o valor inserido se é igual 
		{
			cn1 ++;                            // Seno igual é atribuído a contagem                        
		}
			
		if(vet[i] == 3)
		{
			cn3 ++;
		}
		    
		if(vet[i] == 5)
		{
			cn5++;
		}
		     
		if(vet[i] == -1)               // Se valor for -1 o programa exibe a mensaem e finaliza
		{
			
			break;
		}
		if(i == 19)               // Se  o vetor chegar a ter 20 elementos, o programa finaliza
		{
			
			break;
		}
	}
	
	printf("\n  Nº | Repetições\n");
	printf("\n  1: \t%d", cn1);
	printf("\n  3: \t%d", cn3);
	printf("\n  5: \t%d\n", cn5);
		
	return 0;
}

