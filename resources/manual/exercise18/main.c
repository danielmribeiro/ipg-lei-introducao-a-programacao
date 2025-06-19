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
   	int num,digito,numinvertido,numOriginal=0;
	printf("introduza um numero [100,999]\n");
	scanf("%d", &num);
	numOriginal = num;

	digito=num%10;
	numinvertido=numinvertido*10+digito;
	num=num/10;

	digito=num%10;
	numinvertido=numinvertido*10+digito;
	num=num/10;

	digito=num%10;
	numinvertido=numinvertido*10+digito;
	num=num/10;

	if(numinvertido == numOriginal){
		printf("Capicua\n");
	} else {
		printf("NAO é capicua\n");
	}
    return 0;
	}

