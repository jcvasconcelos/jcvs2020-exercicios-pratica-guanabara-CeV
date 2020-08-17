/*Pratique a declaração e manipulação de ponteiros. 
Defina e inicialize uma variável inteira. 
Defina um ponteiro para inteiro e aponte-o para a variável declarada e inicializada anteriormente. 
Imprima os seguintes valores: 
Valor da variável 
Endereço da variável 
Valor do ponteiro (endereço da variável) 
Valor da variável para qual o ponteiro está apontando (operador de valor “*”) 
Endereço do ponteiro 
Modifique o valor da variável através do ponteiro. 
Imprima os valores descritos acima novamente.
Created by And 20/09/2017 */

#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	// inicializações da variáveis
	int x = 2, *ponteiro_aponta;
	ponteiro_aponta = &x;
	
	printf("|Endereço da variável | Valor da variável|\n");
	printf("|    %i          |      %i           |\n",&x, x);
	printf("|Endereço do ponteiro | Valor do ponteiro|\n");
	printf("|    %i          |      %i           |\n",ponteiro_aponta, *ponteiro_aponta);
	*ponteiro_aponta +=1;
	printf("|Endereço da variável | Valor da variável|\n");
	printf("|    %i          |      %i           |\n",&x+1, x);
	printf("|Endereço do ponteiro | Valor do ponteiro|\n");
	printf("|    %i          |      %i           |\n",ponteiro_aponta+1, *ponteiro_aponta);
	printf("|_____________________|__________________|\n");
	
	getchar();
	return 0;
}
