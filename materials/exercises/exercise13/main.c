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
    int n1, n2;
	
	printf("Introduza um numero \n");
	scanf("%d", &n1);
	
	printf("Introduza outro numero \n");
	scanf("%d",&n2);
	
	if (n1 < n2)
	{
		printf("numeros ordenados por ordem crescente: %d %d \n", n1,n2);
    }else{
		printf("numeros ordenados por ordem crescente: %d %d \n", n2,n1);
	}
		
		
		
	return 0;
}

