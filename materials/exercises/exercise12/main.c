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
    int num,digito,numInvertido=0,numOriginal;

	printf("Numero [100,999]?");
	scanf("%d",&num);
	numOriginal = num;
	
	digito = num % 10;
	numInvertido = numInvertido * 10 + digito;
	num = num /10;

	digito = num % 10;
	numInvertido = numInvertido * 10 + digito;
	num = num /10;

	digito = num % 10;
	numInvertido = numInvertido * 10 + digito;
	num = num /10;

	if (numInvertido == numOriginal){
		printf("Capicua\n");
	} else {
		printf("Nao e capicua\n"); 
	}



   return 0;
}

