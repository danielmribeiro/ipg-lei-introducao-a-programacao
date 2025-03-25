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
    int lado,linha,coluna;

	printf("Lado? ");
	scanf("%d",&lado);

	for (linha=1;linha<=lado;linha++){
		if ((linha==1)||(linha==lado)){
			for (coluna=1;coluna<=lado;coluna++) printf("# ");
		} else {
			printf("#");
			for (coluna=2;coluna<=lado-1;coluna++) printf("  ");
			printf(" #");
		}
		printf("\n");
	}

    return 0;
}

