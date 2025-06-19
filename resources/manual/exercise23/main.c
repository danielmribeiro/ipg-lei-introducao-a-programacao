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
    char letra;
	printf("Introduza uma letra");
	scanf("%c",&letra);

	if ((letra >= 'a') && (letra >= 'z')){
		letra=letra-32;
		printf(" %c \n",letra);
	} else if ((letra >= 'A') && (letra <= 'Z')){
		letra = letra + 32;
		printf(" %c \n",letra);
	} else {
		printf("Caracter introduzido nao e uma letra Maiuscula!!\n");
	}

    return 0;
}

