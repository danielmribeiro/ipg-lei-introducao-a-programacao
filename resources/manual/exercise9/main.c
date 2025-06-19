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
    int n500,n200,n100,n50,n20,n10,n5,m2,m1,valor;

	printf("Valor? ");
	scanf("%d",&valor);

	n500 = valor / 500;
	valor = valor % 500;
	n200 = valor / 200;
	valor = valor % 200;
	n100 = valor / 100;
	valor = valor % 100;
	n50 = valor / 50;
	valor = valor % 50;
	n20 = valor / 20;
	valor = valor % 20;
	n10 = valor / 10;
	valor = valor % 10;
	n5 = valor / 5;
	valor = valor % 5;
	m2 = valor / 2;
	m1 = valor % 2;

	printf("Notas de 500 = \t%d\n",n500);
	printf("Notas de 200 = \t%d\n",n200);
	printf("Notas de 100 = \t%d\n",n100);
	printf("Notas de 50 = \t%d\n",n50);
	printf("Notas de 20 = \t%d\n",n20);
	printf("Notas de 10 = \t%d\n",n10);
	printf("Notas de 5 = \t%d\n",n5);
	printf("Notas de 2 = \t%d\n",m2);
	printf("Notas de 1 = \t%d\n",m1);



    return 0;
}

