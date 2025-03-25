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
 	int n500,n200,n100,n50,n20,n10,n5,m2,m1;
	int valor;
	int max500=1,max200=1,max100=1,max50=1,max20=1,max10=1,max5=1,max2=1;
	
	printf("Valor? ");
	scanf("%d",&valor);

	n500 = valor / 500;
	if (n500 > max500){
		n500 = max500;
	}
	valor = valor - n500 * 500;

	n200 = valor / 200;
	if (n200 > max200) n200 = max200;
	valor = valor - n200 * 200;

	n100 = valor / 100;
	if (n100 > max100) n100 = max100;
	valor = valor - n100 * 100;

	n50 = valor / 50;
	if (n50 > max50) n50 = max50;
	valor = valor - n50 * 50;

	n20 = valor / 20;
	if (n20 > max20) n20 = max20;
	valor = valor - n20 * 20;

	n10 = valor / 10;
	if (n10 > max10) n10 = max10;
	valor = valor - n10 * 10;

	n5 = valor / 5;
	if (n5 > max5) n5 = max5;
	valor = valor - n5 * 5;
	
	m2 = valor / 2;
	if (m2 > max2) m2 = max2;
	valor = valor - m2 * 2;

	m1 = valor;

	

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

