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
#include <stdlib.h>
#include <locale.h>

typedef struct CadastroVeiculos {
   int renavan; 
   char nome[50];
   char placa[7];
   struct CadastroVeiculos *prox;
} objCadastro;

objCadastro cadastro[30];
int opcaoMenu[4];

int MenuPrincipal() {
	printf("1. Incluir novo carro\n");
	printf("2. Exibir carros cadastrados\n");
	printf("3. Pesquisar carros\n");
	printf("4. Excluir carros\n");
	printf("5. Sair do programa\n");
	printf("Digite uma das opções acima: ");
	fflush(stdin);
	scanf("%i", &opcaoMenu[0]);
}

objCadastro Menu1() {
	objCadastro veiculoNovo;
	printf("\n--- CADASTRO DE VEÍCULOS --- \n\n");
	printf("- RENAVAN: ");
	scanf("%i", &veiculoNovo.renavan);
	printf("- NOME: ");
	fflush(stdin);
	gets(veiculoNovo.nome);
	printf("- PLACA: ");
	fflush(stdin);
	gets(veiculoNovo.placa);
	printf("\n");
	return veiculoNovo;
}

int Menu2(int nCarros) {
	
	printf("\n1. Voltar\n");
	printf("2. Fechar\n");
	scanf("%i", &opcaoMenu[2]);
//	OpcoesMenuTerciario(nCarros);
}

int Menu3(int nCarros) {
	
	printf("\n1. Voltar\n");
	printf("2. Fechar\n");
	scanf("%i", &opcaoMenu[3]);
//	OpcoesMenuQuaternario(nCarros);
}

main () {
	setlocale(LC_ALL, "Portuguese");
	
	objCadastro proximo_CadastroVeiculos;
	objCadastro *ini_CadastroVeiculos = NULL;
	objCadastro *atual_CadastroVeiculos;
	
	MenuPrincipal();
	
	// Menu Principal
	switch(opcaoMenu[0]) {
		case 1:
			proximo_CadastroVeiculos = Menu1();
			if (ini_CadastroVeiculos == NULL) {
				*atual_CadastroVeiculos = proximo_CadastroVeiculos;
			}
			
			ini_CadastroVeiculos->prox = &proximo_CadastroVeiculos;
			break;
		case 2:
			
			break;
		case 3:
		
			break;
	}
	
	// Menu Secundário
	switch(opcaoMenu[1]) {
		case 1:
			MenuPrincipal();
			break;
		case 2:
			Menu1();
			break;
		case 3:
			system("PAUSE");
			break;
	}
}
