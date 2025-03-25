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
    char frase[100];
	char fraseinvertida[100];
	int i;
    printf("diga uma frase?\t");
    gets(frase);

	for(i=0;i<strlen(frase);i++){
	fraseinvertida[i]= frase[strlen(frase)-1-i];
	}
	printf("a frase invertida e:%s\n",fraseinvertida);


    return 0;
}

