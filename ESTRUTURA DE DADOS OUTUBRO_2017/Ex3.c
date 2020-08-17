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

typedef struct Cadastro {
	char marca[15];
	char cor[10];
	int ano;
	float valor;
} objCadastro;

objCadastro cadastro[20];
int opcaoMenu[4];

int MenuPrincipal(int nCarros) {
	printf("1. Pesquisar por Preço\n");
	printf("2. Pesquisar por Marca\n");
	printf("3. Pesquisa Completa\n");
	printf("Digite uma das opções acima: ");
	fflush(stdin);
	scanf("%i", &opcaoMenu[0]);
	OpcoesMenuPrincipal(nCarros);
}

int Menu1(int nCarros) {
	float preco;
	int i;
	int contador = 0;
	printf("Digite um preço: ");
	fflush(stdin);
	scanf("%f", &preco);
	for (i = 0; i < nCarros; i++) {
		if (cadastro[i].valor == preco || cadastro[i].valor > preco) {
			printf("\nRESULTADO DA PESQUISA\n");
			printf("- MARCA: %s\n", cadastro[i].marca);
			printf("- COR: %s\n", cadastro[i].cor);
			printf("- ANO: %i\n", cadastro[i].ano);
			contador++;
		} 
	}
	if (contador == 0) {
		printf("\nNenhum veículo encontrado!\n");
	}
	contador = 0;
	printf("\n1. Voltar\n");
	printf("2. Fazer nova pesquisa por preço\n");
	printf("3. Fechar\n");
	scanf("%i", &opcaoMenu[1]);
	OpcoesMenuSecundario(nCarros);
}

int Menu2(int nCarros) {
	char marca[50];
	int i;
	int contador = 0;
	printf("Digite uma marca: ");
	fflush(stdin);
	gets(marca);
	for (i = 0; i < nCarros; i++) {
		if (strcmp(cadastro[i].marca, marca) == 0) {
			printf("\nRESULTADO DA PESQUISA\n");
			printf("- MARCA: %s\n", cadastro[i].marca);
			printf("- COR: %s\n", cadastro[i].cor);
			printf("- ANO: %i\n", cadastro[i].ano);
			printf("- VALOR: %.2f\n", cadastro[i].valor);
			contador++;
		}
	}
	if (contador == 0) {
		printf("\nNenhum veículo encontrado!\n");
	}
	contador = 0;
	printf("\n1. Voltar\n");
	printf("2. Fazer nova pesquisa por marca\n");
	printf("3. Fechar\n");
	scanf("%i", &opcaoMenu[2]);
	OpcoesMenuTerciario(nCarros);
}

int Menu3(int nCarros) {
	int i;
	int contador = 0;
	char marca[50];
	char cor[25];
	int ano;
	printf("Digite a marca: ");
	fflush(stdin);
	gets(marca);
	printf("Digite o ano: ");
	scanf("%i", &ano);
	printf("Digite a cor: ");
	fflush(stdin);
	gets(cor);
	for (i = 0; i < nCarros; i++) {
		if (strcmp(cadastro[i].marca, marca) == 0 && cadastro[i].ano == ano && strcmp(cadastro[i].cor, cor) == 0) {
			printf("\nRESULTADO DA PESQUISA\n");
			printf("- MARCA: %s\n", cadastro[i].marca);
			printf("- COR: %s\n", cadastro[i].cor);
			printf("- ANO: %i\n", cadastro[i].ano);
			printf("- VALOR: %.2f\n", cadastro[i].valor);
			contador++;
		}
	}
	if (contador == 0) {
		printf("\nNenhum veículo encontrado!\n");
	}
	contador = 0;
	printf("\n1. Voltar\n");
	printf("2. Fazer nova pesquisa completa\n");
	printf("3. Fechar\n");
	scanf("%i", &opcaoMenu[3]);
	OpcoesMenuQuaternario(nCarros);
}

int OpcoesMenuQuaternario(int nCarros) {
	switch(opcaoMenu[3]) {
		case 1:
			MenuPrincipal(nCarros);
			break;
		case 2:
			Menu3(nCarros);
			break;
		case 3:
			system("PAUSE");
			break;
	}
}

int OpcoesMenuTerciario(int nCarros) {
	switch(opcaoMenu[2]) {
		case 1:
			MenuPrincipal(nCarros);
			break;
		case 2:
			Menu2(nCarros);
			break;
		case 3:
			system("PAUSE");
			break;
	}
}

int OpcoesMenuSecundario(int nCarros) {
	switch(opcaoMenu[1]) {
		case 1:
			MenuPrincipal(nCarros);
			break;
		case 2:
			Menu1(nCarros);
			break;
		case 3:
			system("PAUSE");
			break;
	}
}

int OpcoesMenuPrincipal(int nCarros) {
	switch(opcaoMenu[0]) {
		case 1:
			// PESQUISAR PRO PREÇO
			Menu1(nCarros);
			break;
		case 2:
			// PESQUISAR POR MARCA
			Menu2(nCarros);
			break;
		case 3:
			// PESQUISA COMPLETA
			Menu3(nCarros);
			break;
	}
}

main () {
	setlocale(LC_ALL, "Portuguese");
	
	int nCarros;
	int i;
	
	printf("Digite o número de carros que deseja armazenar: ");
	scanf("%i", &nCarros);
	while (nCarros > 20) {
		printf("Número máximo permitido 20! Digite novamente: ");
		scanf("%i", &nCarros);
	}
	
	for (i = 0; i < nCarros; i++) {
		fflush(stdin);
		printf("--- CADASTRO DE VEÍCULOS --- \n\n");
		printf("- MARCA DO VEÍCULO: ");
		gets(cadastro[i].marca);
		printf("- ANO DO VEÍCULO: ");
		fflush(stdin);
		scanf("%i", &cadastro[i].ano);
		fflush(stdin);
		printf("- COR: ");
		gets(cadastro[i].cor);
		printf("- VALOR: ");
		scanf("%f", &cadastro[i].valor);
		printf("\n");
	}
	
	MenuPrincipal(nCarros);
	OpcoesMenuPrincipal(nCarros);
}
