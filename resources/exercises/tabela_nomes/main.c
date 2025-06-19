/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <string.h>

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int main(int argc, char *argv[])
{
    char nomes[100][50];
	int numAluno[100];
	int nAlunos,i,j;

	printf("Quantos alunos? ");
	scanf("%d",&nAlunos);

	for (i=0;i<nAlunos;i++){
		fflush(stdin);
		printf("Nome ? ");
		gets(nomes[i]);
		printf("numero ? ");
		scanf("%d",&numAluno[i]);
	}

	printf("--- Listagem dos Alunos ---\n");
	printf("\tNOME\tNUMERO\n");
	printf("--------------------------\n");
	for (i=0;i<nAlunos;i++){
		printf("\t%s\t%d\n",nomes[i],numAluno[i]);
	}
	// Ordenação alfabética
	for (i=0;i<nAlunos-1;i++){
		for (j=i+1;j<nAlunos;j++){
			if (strcmp(nomes[i],nomes[j])>0){
				char auxs[50];
				strcpy(auxs,nomes[i]);
				strcpy(nomes[i],nomes[j]);
				strcpy(nomes[j],auxs);
				int aux = numAluno[i];
				numAluno[i] = numAluno[j];
				numAluno[j] = aux;
			}
		}
	}
	printf("--- Listagem dos Alunos ordenados ---\n");
	printf("\tNOME\tNUMERO\n");
	printf("--------------------------\n");
	for (i=0;i<nAlunos;i++){
		printf("\t%s\t%d\n",nomes[i],numAluno[i]);
	}

    return 0;
}

