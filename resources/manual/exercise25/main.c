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
    int num;
	printf("INTRODUZA UM NUMERO");
	scanf("%d", &num);

	// 1º forma
	if (num % 2 == 0){
		printf("Numero par\n");
	}else {
		printf("Numero impar\n");
	}

	if (num % 2){
		printf("Numero impar\n");
	}else {
		printf("Numero par\n");
	}

	// 2ºforma
	int digito;
	digito = num % 10;
	if ((digito == 0)||(digito == 2)||(digito == 4)||(digito == 6)||(digito == 8)){
		printf("Numero par\n");
	} else {
		printf("Numero impar\n");
    return 0;
	}

	// 3ºforma
	if(((num/2)*2)==num){
		printf(" Numero par\n");
	} else {
		printf("Impar \n");
	}

	// 4ºforma
	if ((num & 1 ) == 0){
		printf("Numero par\n");
	} else {
		printf("Numero impar \n");
	}

	return 0;
}
