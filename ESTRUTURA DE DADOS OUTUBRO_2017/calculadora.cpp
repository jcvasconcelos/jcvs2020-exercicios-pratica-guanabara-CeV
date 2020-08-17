/*

		PROVA 1 ~ ESTRUTURA DE DADOS  ~  PROFESSOR FELIPE GHISLENI FREITAS 
		
		EXERCÍCIO 

=			 
=			
=			
=			     	
=				  	
=				  
=			     

	
		Aluno: JOÃO CARLOS VASCONCELOS ~ CNEC Santo Ângelo - RS ~ 2017 
				
*/

#include <stdio.h>

int main(void) {
   int func;
   int var1, var2;
   int resul;

   // OUTPUT (Imprime Linhas Básicas)
   printf("========================\n");
   printf("    simpleCALC - C    \n");
   printf("========================\n\n");

   // Menu de Opções
   printf("[1 >> somar]\t[2 >> multiplicar]\n[3] >> subtrair]\t[4 >> dividir]\n");
   printf("O que deseja fazer? ");

   // Captura o teclado (input)
   scanf("%d", &func);

   // Nova Linha
   printf("\n");


   printf("Por favor, preencha com a primeira váriavel:\n");
   scanf("%d", &var1); // Captura váriavel INT

   printf("Por favor, preencha com a segunda váriavel:\n");
   scanf("%d", &var2); // Captura váriavel INT

   // Nova Linha
   printf("\n");

   // Checa o comando escolhido
   if (func == 1) {
       resul = var1 + var2;
       printf("%d + %d = %d\n", var1, var2, resul);
   } else if (func == 2) {
       resul = var1 * var2;
       printf("%d * %d = %d\n", var1, var2, resul);
   } else if (func == 3) {
       resul = var1 - var2;
       printf("%d - %d = %d\n", var1, var2, resul);
   } else if (func == 4) {
       resul = var1 / var2;
       printf("%d / %d = %d\n", var1, var2, resul);
   } else {
       printf("Opção Inválida!"); // Caso não for nenhuma
   }

   printf("\n\n========================");
   printf("\n        FIM!");
   printf("\n========================\n\n");


   // Retorna sem erros (0) ou seja, (EXIT_SUCCESS)
   return 0;
}
