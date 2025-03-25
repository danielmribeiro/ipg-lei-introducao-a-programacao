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
    int num, digito, soma=0;

	printf("Numero [100,999]\n");
	scanf("%d", &num);

	digito=num%10;
	if(digito % 2 == 0) soma=soma+digito;
	num=num/10;

	digito=num%10;
	if(digito % 2 == 0) soma=soma+digito;
	num=num/10;

	digito=num%10;
	if(digito % 2 == 0) soma=soma+digito;
	num=num/10;

	printf("Soma dos digitos pares = %d\n", soma);

    return 0;
}

