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
#include <limits.h>
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
	int numeros[100];
	int nAlunos, i,j;
	
	printf("Quantos alunos deseja introduzir? ");
	scanf("%d",&nAlunos);
	
	for (i=0;i<nAlunos;i++){
		fflush(stdin);
		printf("Nome ? ");
		gets(nomes[i]);
		printf("Numero ? ");
		scanf("%d",&numeros[i]);
	}
	
	for (i=0;i<nAlunos-1;i++){
		for (j=i+1;j<nAlunos;j++){
			if (strcmp(nomes[i],nomes[j])>0){
				char auxs[50];
				strcpy(auxs,nomes[i]);
				strcpy(nomes[i],nomes[j]);
				strcpy(nomes[j],auxs);
				int aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;
			}
		}
	}
	printf("--- Listagem ordenada por Nome ---\n");
	for(i=0;i<nAlunos;i++){
		printf("%s - %d \n", nomes[i],numeros[i]);
	}

    return 0;
}

