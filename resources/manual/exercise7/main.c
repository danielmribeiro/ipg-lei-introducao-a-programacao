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
    int numero;
	printf("Numero? ");
	scanf("%d",&numero);

	printf("%d em octal = %o\n",numero,numero);
	printf("%d em hexadecimal = %X\n", numero,numero);

	char letra;
	fflush(stdin);
	printf("Letra ?");
	scanf(" %c",&letra);

	printf(" %c = %d \n",letra,letra);




    return 0;
}

