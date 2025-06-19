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
    char frase[100];
	
	int valorInicial,valorFinal;
	int i;

	printf("frase?\t");
	gets(frase);
	
	do{
		printf("Valor inicial?\t");
		scanf("%d",&valorInicial);
		if ((valorInicial<0)||(valorInicial>strlen(frase)-1)){
			printf("Valor incorreto! [1,5]\n");
			printf("Introduza valor inicial entre[0,%d]\n",strlen(frase)-1);

		}
	}while((valorInicial<0||valorInicial>strlen(frase)-1));

	do{
		printf("Valor final?\t");
		scanf("%d",&valorFinal);
		if ((valorFinal<=valorInicial)||(valorFinal>strlen(frase)-1)){
			printf("Valor incorreto! [1,5]\n");
			printf("Introduza valor final entre [%d,%d]\n",valorInicial+1,strlen(frase)-1);

		}
	}while((valorFinal<valorInicial)||(valorFinal>strlen(frase)-1));

	for(i=valorInicial;i<=valorFinal;i++){
		printf("%c",frase[i]);
	}
	printf("\n");

	
    return 0;
}








