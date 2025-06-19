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
#include <locale.h>
#include <string.h>

void verificacao(char *carateri, char *caraterf){

	if(*carateri > *caraterf){
		int aux = *carateri;
		*carateri = *caraterf;
		*caraterf = aux;
	}

}

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
	setlocale(LC_ALL,"");

    char ci, cf;
	int i;

	do{
		printf("Carater Inicial? ");
		scanf(" %c",&ci); //o espaço prepositado deixado entre" e %c serve para substituir o fflush(stdio);
	}while((ci < 'A')||(ci > 'Z'));

	do{
		printf("Carater Final? ");
		scanf(" %c",&cf);
	}while((cf < 'A')||(cf > 'Z'));

	verificacao(&ci,&cf);

	i=ci;
	while(i<=cf){
		printf(" %c",i);
		i++;
	}

	printf("\n");
    return 0;
}

