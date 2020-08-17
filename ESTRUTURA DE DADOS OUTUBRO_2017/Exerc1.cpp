/*Pratique a declara��o e manipula��o de ponteiros. 
Defina e inicialize uma vari�vel inteira. 
Defina um ponteiro para inteiro e aponte-o para a vari�vel declarada e inicializada anteriormente. 
Imprima os seguintes valores: 
Valor da vari�vel 
Endere�o da vari�vel 
Valor do ponteiro (endere�o da vari�vel) 
Valor da vari�vel para qual o ponteiro est� apontando (operador de valor �*�) 
Endere�o do ponteiro 
Modifique o valor da vari�vel atrav�s do ponteiro. 
Imprima os valores descritos acima novamente.
Created by And 20/09/2017 */

#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	// inicializa��es da vari�veis
	int x = 2, *ponteiro_aponta;
	ponteiro_aponta = &x;
	
	printf("|Endere�o da vari�vel | Valor da vari�vel|\n");
	printf("|    %i          |      %i           |\n",&x, x);
	printf("|Endere�o do ponteiro | Valor do ponteiro|\n");
	printf("|    %i          |      %i           |\n",ponteiro_aponta, *ponteiro_aponta);
	*ponteiro_aponta +=1;
	printf("|Endere�o da vari�vel | Valor da vari�vel|\n");
	printf("|    %i          |      %i           |\n",&x+1, x);
	printf("|Endere�o do ponteiro | Valor do ponteiro|\n");
	printf("|    %i          |      %i           |\n",ponteiro_aponta+1, *ponteiro_aponta);
	printf("|_____________________|__________________|\n");
	
	getchar();
	return 0;
}
