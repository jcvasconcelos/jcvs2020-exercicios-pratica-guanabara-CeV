#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
										//criando a variável ponteiro 
										//para o arquivo 
		FILE *ponteiroArquivo;
		
		
										
										//a partir daqui é onde ABRE/CRIA O ARQUIVO
			ponteiroArquivo = fopen ("criandomeusegundoarquivo.txt", "a+");
					
			if (ponteiroArquivo == NULL) {
				
				printf("\n\tPROBLEMAS AO ABRIR/CRIAR O ARQUIVO\n\n");
			return(0);
			}
											//aqui o usuário CRIA um texto para ser escrito DENTRO DO ARQUIVO CRIADO!
	fprintf(ponteiroArquivo, "BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_BOOLSONARO_2018_");
	
	
										//aqui virá o comando para FECHAR  o arquivo
			fclose(ponteiroArquivo);
	
	system("pause");
return(0);
	
}
