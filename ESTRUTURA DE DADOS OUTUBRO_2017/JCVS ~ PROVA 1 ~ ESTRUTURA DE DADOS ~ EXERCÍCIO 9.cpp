/*

		PROVA 1 ~ ESTRUTURA DE DADOS  ~  PROFESSOR FELIPE GHISLENI FREITAS 
		
=		EXERC�CIO ~ 9
=		Fazer um �programinha� para cadastrar Funcion�rios de uma Firma.


		Aluno: JO�O CARLOS VASCONCELOS ~ CNEC Santo �ngelo - RS ~ 2017 

*/


	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <conio.h>
	#include <unistd.h>
	#include <locale.h>
	#define aux 99
												//AQUI a famosa STRUCT, que ser� chamada l� embaixo
		typedef struct {
			
			int cod, idade;
	
	char nome[30], sexo[2], cargo[20];

	float salario;
	
} Cadastro;

												// AQUI a seguir vem a Estrutura do tipo cadastro para funcionario armazenando 
												//                           o indice MAX (m�ximo) de cadastro.
		Cadastro funcionario[aux];

											
											
											
												// AQUI a seguir vem os prot�tipos de todas as fun��es
	
			void Limpa_Buffer();
			
			void Limpa_Dos();
		
		int Inserir(Cadastro *funcionario);
		
			void Listar(Cadastro *funcionario);
			
			void Alterar(Cadastro *funcionario);
			
			void Pesquisar(Cadastro *funcionario);
			
			void Excluir(void);
		
		int top;


	int main(int agrc, char *argv[]) {				// AQUI � a FUN��O PRINCIPAL 					
										setlocale(LC_ALL,"Portuguese");			
				top = 0;
				int escolha;
			        do {
			        Limpa_Dos();
			        
			        								//AQUI a seguir S�O AS MENSAGENS exibidas para o usu�rio 
			        								// interagir com o programa.
        printf("\t Cadastro de Funcionarios\n\n");
       
		    printf("1 - INSIRA AQUI OS DADOS DO FUNCION�RIO A SER CADASTRADO:\n");
	        printf("2 - APAGA os Dados de um cadastro\n");
	        printf("3 - LISTA Dados\n");
	        printf("4 - BUSQUE POR UM CADASTRO\n");
	        printf("5 - ALTERAR DADOS DE UM CADASTRO\n");
	        printf("6 - SAIR do programa\n\n");
	        
			printf("\t Ol�, Professor FELIPE GHISLENI! Por gentileza, Escolha uma op��o, digitando o n�mero desejado: ");
       
	    scanf("%i", &escolha);
       
	    
    switch(escolha) {
    							
    
	
	case 1: if(top < aux) {									// se o TOP for menor que o n�mero m�ximo (MAX)  
															// permitido no cadastro (QUE � 99) ele ir� cadastrar.
            Inserir(funcionario);
            
            printf("\n DADO INSERIDO COM SUCESSO!\n\n");
          		  } 
		  
		  else 												//sen�o, n�o aceitar� o 
		    	printf(" ALERTA, o Sitema de Cadastro est� no limite! ");
			
			break;
       														 //se cadastro for == 0 ent�o n�o h� dados para serem
															 //	visualizados, ou seja, a mesma ideia para os pr�ximos itens
    case 2: if(!top) 
		    fprintf(stdout, "\nN�o h� dados para excluir ");
	        
			else {
			    Excluir();
			    
			printf("\nDados excluido com sucesso "); 
			 }  
			 
			break; 
 			 
    case 3: if(!top)
 	        printf("\nN�o h� dados no sistema ");
 	        
			 else 
 	        		Listar(funcionario);
 		    break;
 		    
 	case 4: if(!top) 
 		    printf("\nN�o h� dados no sistema ");
 		    
			 else 
 		    Pesquisar(funcionario);
 		    break;
 			
 	case 5: if(!top)
 		    printf("\nN�o h� dados no sistema ");
 		    else {
 		    
			 Alterar(funcionario);
 		    printf(" OS DADOS FORAM ALTERADOS COM SUCESSO!!\n\n");
		  } break;
 			
 	case 6: printf("\n Volte sempre! \n"); 
	        break;
    
	default: printf("\nDigite uma op��o v�lida!\n");  				//Mensagem exibida em caso de digitar uma op��o que n�o existe no MENU
	        break;
		}
		
		sleep(1);  													// O programa d� um tempinho por aqui, tipo um delay do ardu�no. (da uma dormida)
	
	getch();
		
    } while (escolha!=6);  											// ele for�a a sa�da, finaliza
	
	getchar();
return 0;
}


void Limpa_Buffer() {
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

void Limpa_Dos() {
	system("cls || clear");
	system("title cadastro");
}

																		// funcao respons�vel por inserir novos cadastro 
																		//sempre inserindo uma posi��o  na estrutura.
int Inserir(Cadastro *funcionario) {
	Limpa_Buffer();
	funcionario[top].cod = top + 1;
					
	printf( "\nCodigo: %i\n", funcionario[top].cod);
	printf( "Nome:\n----> ", funcionario[top].nome);
	
	fgets(funcionario[top].nome, 29, stdin);
	
	printf( "Idade:\n----> ");
	scanf("%i", &funcionario[top].idade);
	Limpa_Buffer();
	
	printf( "Salario:\n----> ");
	scanf("%f", &funcionario[top].salario);
	Limpa_Buffer();
	
	printf( "Sexo:\n----> ");

	fgets(funcionario[top].sexo,2,stdin);
	Limpa_Buffer();
	
	printf( "Cargo:\n----> ");
	fgets(funcionario[top].cargo,19,stdin);
	top++;
}

											
void Excluir(void) {				     				// AQUI ele exclui o �ltimo registro que foi inserido
	top--;
}

														
void Alterar(Cadastro *funcionario) {					// faz a pesquisa pelo c�digo. Se o la�o de repeti��o encontrar 
														// ele conta + 1 e vai ler as pr�ximas informa��es..
			int dado, contador = 0;
			puts("\n\tEfetue uma pesquisa pelo seu codigo");
			printf( "Codigo do registro: ");
			scanf("%i", &dado);
			
			for(int i = 0; i<top; i++) {
				
				if(dado == funcionario[i].cod) {
		
			Limpa_Buffer();
			
			contador+=1;
			
			
			printf( "Nome:\n----> ");
			fgets(funcionario[i].nome, 29, stdin);
			
			printf( "Idade:\n----> ");
			scanf("%i", &funcionario[i].idade);
			
			printf( "Salario:\n----> ");
			scanf("%f", &funcionario[i].salario);
			Limpa_Buffer();
			
			printf( "Sexo:\n----> ");
			fgets(funcionario[i].sexo,2,stdin);
			Limpa_Buffer();
			
			printf( "Cargo:\n----> ");
			fgets(funcionario[i].cargo,19,stdin);
				}
			} 																// AQUI ele passou pelo la�o de repeti��o, MAS a condi��o N�O foi satisfeita,  
																			// ent�o o contador for == 0 aparecer� com a seguinte mensagem.
			if(!contador) {
			fprintf(stdout, "\n\tN�O foi encontrado registro\n");
		}
			sleep(1);
			
		Limpa_Buffer();

}

void Listar(Cadastro *funcionario) {										// Laco de repeti��o para percorrer os usu�rios cadastrdos.

	for(int i = 0; i<top; i++) {

		printf( "\n================\n\n");

		printf( "Arquivo: %i\n\n",(i+1));

		printf( "Codigo: %i\n\n",funcionario[i].cod);

		printf( "Nome: %s\n\n",funcionario[i].nome);

		printf( "Idade: %i\n\n",funcionario[i].idade);

		printf( "Sexo: %s\n\n", funcionario[i].sexo);

		printf( "Salario: %.2f\n\n", funcionario[i].salario);

		printf( "Cargo: %s\n\n", funcionario[i].cargo);

		printf( "================");
	}	
}


void Pesquisar(Cadastro *funcionario) {											// ESTA � a fun��o para pesquisar os dados do usu�rio
	
	int dado, contador = 0;
	
	printf( "\nPara encontrar um registro, a seguir informe o codigo: ");
	scanf("%i", &dado);
																				//Eis o la�o de repeti��o pra percorrer o �ndice a seguir, 
																				//se encontrar, ele atende a condi��o a seguir e informa o 
																				//usu�rio/funcion�rio que foi procurado.
	for(int i = 0; i<top; i++) {
	
		if(dado == funcionario[i].cod) {
		 
		  printf( "\n.................................\n");
          
		  printf( "Codigo: %i\n\n",funcionario[i].cod);
		  
		  printf( "Nome: %s\n\n",funcionario[i].nome);
		  
		  printf( "Idade: %i\n\n",funcionario[i].idade);
		  
		  printf( "Sexo: %s\n\n", funcionario[i].sexo);
		  
		  printf( "Salario: %.2f\n\n", funcionario[i].salario);
		  
		  printf( "Cargo: %s\n\n", funcionario[i].cargo);
		  
		  printf( "......................................");
		  
		  contador+=1;
		}
	} 																			//se n�o passar pelo if o contador passa ser 0 
																				//	ent�o cair� na condi��o a seguir
				if(!contador)
			
			printf( "\n\t O Registro N�O foi encontrado!\n");
	getch();
sleep(1);
}
