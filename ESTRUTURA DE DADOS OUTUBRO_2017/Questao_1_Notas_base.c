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

//Protótipos

void *mallocc(unsigned tam); 


int main()
{
    int n_lin;               //numero de linhas
    int n_col = 6;     //numero de colunas
    float **mat1;            //primeira matriz a ser somada
    int i_lin, i_col;        //indices para linha e coluna

//leitura do número de alunos (número de linhas da matriz)
    printf("Digite o número de alunos:");
    scanf("%d", &n_lin);
    mat1 = mallocc(n_lin * sizeof(float *));

    for (i_lin = 0; i_lin < n_lin; i_lin++) {
        mat1[i_lin] = mallocc(n_col * sizeof(float));
    }
    /* leitura da primeira matriz */
    for (i_lin = 0; i_lin < n_lin; i_lin++) {
        printf("Digite a linha %d da primeira matriz:\n", i_lin);
        for (i_col = 0; i_col < n_col; i_col++) {
            if(i_col==0)
				printf("Digite o nome:\n");
			if(i_col==1)
				printf("Digite o cpf:\n");
			if(i_col==2)
				printf("Digite a n1:\n");
			if(i_col==3)
				printf("Digite o n2:\n");
			if(i_col==4)
				printf("Digite o n3:\n");
				scanf("%f", &mat1[i_lin][i_col]);
            if(i_col==5)
		       {
		       		?
    		        break;
			   }
		       
		       
		}
    }
// impressao do resultado
    printf("Nota Final do Aluno\n");
    for (i_lin = 0; i_lin < n_lin; i_lin++) {
        {
            ?
        }
        printf("\n");
    } 
    
//liberacao da memoria alocada 
    for (i_lin = 0; i_lin < n_lin; i_lin++) {
        free(mat1[i_lin]);
    }
    free(mat1);



    return EXIT_SUCCESS;
}


// Função para fazer a alocação dinâmica de memória 
void *mallocc(unsigned n_bytes)
{
    void *p;

    p = malloc(n_bytes);
    if (p == NULL) {
        printf("Memoria insuficiente!\n");
        exit(EXIT_FAILURE);
    }
    return p;
}
