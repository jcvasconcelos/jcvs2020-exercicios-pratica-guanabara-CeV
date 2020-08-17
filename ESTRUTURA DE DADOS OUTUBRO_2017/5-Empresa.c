/*##############################################
Rafael Catelan do Nascimento             
Cadeira: Estrutura de dados  
Algoritmo: Cadastro de empresa usando estrutura dinamica
Data:09/2017
##############################################*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//Define a estrutura empresa
struct empresa {
char nome[10];
float s1;
float s2;
float s3;
int cpf;
float media_salarial;
};


int main () {
int n,i=0;
printf("Digite o numero de funcionarios:\n");
scanf("%d",&n);

//Define uma estrutura com ponteiro
struct empresa *funcionarios;
//Aloca dinamicamente o tamanho da estrutura
funcionarios = malloc(n * sizeof(struct empresa));

for (i = 0; i<n; ++i) {
  printf("Digite o nome do funcionario %d\n",i+1);
  scanf("%s",&funcionarios[i].nome);
  printf("Digite o cpf do funcionario %d\n",i+1);
  scanf("%d",&funcionarios[i].cpf);
  printf("Digite os 3 salarios do funcionario %d\n",i+1);
  scanf("%f %f %f",&funcionarios[i].s1,&funcionarios[i].s2,&funcionarios[i].s3);
  //Calcula o bonus do terceiro salario e calcula a media dos salarios
  funcionarios[i].media_salarial=(funcionarios[i].s1+funcionarios[i].s2+(funcionarios[i].s3*1.2))/3;
}

for (i = 0; i < n; ++i)
{
  printf("\nA media salarial do primeiro trismestre do funcionario %s e cpf:%d = %.2f\n",funcionarios[i].nome,funcionarios[i].cpf,funcionarios[i].media_salarial);
}
  //Libera a memoria utilizada 
  free(funcionarios);
  system ("pause");
 }
