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
    int n1,n2;
	printf("Numero? ");
	scanf("%d",&n1);
	printf("Numero? ");
	scanf("%d",&n2);
	
	if (n1 > n2){
		printf("o maior de %d e %d = %d\n", n1,n2,n1);
	} else {
		printf("o maior de %d e %d = %d\n", n1,n2,n2);
	}

    return 0;
}

