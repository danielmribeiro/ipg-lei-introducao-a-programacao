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
    int num,soma;
	
	printf("Introduza um numero inteiro: ");
	scanf("%d", &num);

	soma = 0;

	while(num>0){
		soma+=num%10;
		num/=10;
	}

	if(soma%9 == 0){
		printf("Divisivel por 9!\n");
	}else{
		printf("Não divisivel por 9!\n");
	}

    return 0;
}

