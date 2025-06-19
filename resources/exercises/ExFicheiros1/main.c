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
    FILE *f;
	int conta = 0;
	int valor,i;
	int numRep[201];

	if ((f=fopen("Dados.txt","r"))==NULL){
		printf("Erro na Abertura do ficheiro!\n");
		return 0;
	}

	for (i=0;i<201;i++){
		numRep[i] = 0;
	}

	while(fscanf(f,"%d",&valor)!=EOF){
		numRep[valor]++;
	}
	fclose(f);

	if ((f=fopen("Output.txt","w"))==NULL){
		printf("Erro na Abertura do ficheiro!\n");
		return 0;
	}
	for (i=0;i<201;i++){
		fprintf(f,"%d - %d\n",i,numRep[i]);
	}
	fclose(f);

    return 0;
}

