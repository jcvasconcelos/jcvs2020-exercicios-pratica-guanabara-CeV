#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
										//criando a vari�vel ponteiro 
										//para o arquivo 
		FILE *ponteiroArquivo;
		
		
										
										//a partir daqui � onde ABRE/CRIA O ARQUIVO
			ponteiroArquivo = fopen ("criandomeusegundoarquivo.txt", "a+");
					
			if (ponteiroArquivo == NULL) {
				
				printf("\n\tPROBLEMAS AO ABRIR/CRIAR O ARQUIVO\n\n");
			return(0);
			}
											//aqui o usu�rio CRIA um texto para ser escrito DENTRO DO ARQUIVO CRIADO!
	fprintf(ponteiroArquivo, "BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_");
	
	
										//aqui vir� o comando para FECHAR  o arquivo
			fclose(ponteiroArquivo);
	
	system("pause");
return(0);
	
}
