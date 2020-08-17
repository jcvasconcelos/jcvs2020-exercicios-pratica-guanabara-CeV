//1. (0,5) Pratique a declaração e manipulação de ponteiros. Defina e inicialize uma variável inteira,
//defina um ponteiro para inteiro e aponte-o para a variável declarada e inicializada
//anteriormente. Imprima os seguintes valores na tela: Valor da variável, endereço da variável,
//valor do ponteiro (endereço da variável), valor da variável para qual o ponteiro está apontando
//(operador de valor “*”), endereço do ponteiro, modifique o valor da variável através do
//ponteiro. Imprima os valores descritos acima novamente.          
//Estrutura de dados 
// MAURÍCIO MATOZZO


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main () {

int num=20;
int *pont;

//Aponta o ponteiro para a variavel numero
pont=&num;

//Imprime o valor de numero

printf("Valor de numero=%d\n",num);

//Imprime o enbdereco de memoria de numero
printf("Endereco de numero=%d\n",&num);

//Imprime o valor do ponteiro
printf("Valor de ponteiro=%d\n",pont);

//Imprime o da variavel que o ponteiro aponta
printf("Valor da varivel apontada pelo ponteiro=%d\n",*pont);

//Imprime o endereco de memoria do ponteiro
printf("Endereco do ponteiro=%d\n\n",&pont);

//Modifica o valor de num atraves do ponteiro
*pont=17;

//Imprime o valor de numero
printf("Valor de numero=%d\n",num);

//Imprime o enbdereco de memoria de numero
printf("Endereco de numero=%d\n",&num);

//Imprime o valor do ponteiro
printf("Valor de ponteiro=%d\n",pont);

//Imprime o da variavel que o ponteiro aponta
printf("Valor da varivel apontada pelo ponteiro=%d\n",*pont);

//Imprime o endereco de memoria do ponteiro
printf("Endereco do ponteiro=%d\n",&pont);


system("pause");
}
