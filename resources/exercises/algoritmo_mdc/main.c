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
 	int n1, n2, a, b, r;   
	printf("Introduza o 'a' de mdc(a,b)");
	scanf("%d",&a);
	printf("Introduza o 'b' de mdc(a,b)");
	scanf("%d", &b);
	n1=a;
	n2=b;
	if((a<=0)||(b<=0)){
			printf("não é possivel calcular o mdc");
	}else{
			do{
				r=a%b;
				a=b;
				b=r;
			}while(r>0);
				printf("mdc(%d,%d) é %d", n1, n2, a);
		}

    return 0;
}

