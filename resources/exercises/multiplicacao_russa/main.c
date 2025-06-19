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
    int ca, cb, n1, n2, soma;
	printf("colunaA?");
	scanf("%d",&n1);
	printf("colunab?");
	scanf("%d",&n2);
	cb=n2;
	soma=n1;
	do{
		ca=cb+n1;
		n1=ca;
		cb=cb/2;
		if(cb%2!=0){
			soma=soma+ca;
		}
	}while(cb!=1);
	printf("colunaA é %d e colunaB é %d", ca, cb);

    return 0;
}

