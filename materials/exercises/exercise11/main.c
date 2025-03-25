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
    int numero, d1, d2, d3, soma;
	printf("Numero [100,999]?");
	scanf("%d", &numero);
	d3=numero%10;
	numero=numero/10;
	d2=numero%10;
	numero=numero/10;
	d1=numero%10;
	soma=d1+d2+d3;
	printf("%d + %d + %d = %d\n", d1,d2,d3,soma);

	
    return 0;
}

