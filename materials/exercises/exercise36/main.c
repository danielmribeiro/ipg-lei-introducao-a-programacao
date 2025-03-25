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
    printf("Ler uma frase e um valor n, inteiro no intervalo [1,5]. Escrever os valores de n em n vezes da frase.\n");
	
	//1a forma
	
	char frase[100];
	int i;
	int valor;
	
	printf("Frase?\t");
	gets(frase);
	
	do{
		printf("Valor?\t");
		scanf("%d",&valor);
		if ((valor<1)||(valor>5)){
			printf("Valor incorreto! [1,5]\n");
		}
	}while((valor<1)||(valor>5));



	//Utilizando for

	for(i=valor-1;i<strlen(frase);i=i+valor){
		printf("%c",frase[i]);
	}
	printf("\n");

	//utilizando Do-While()
	i=valor-1;
	do{
		printf("%c",frase[i]);
		i=i+valor;
	}while(i<strlen(frase));
	printf("\n");

	//Utilizando While()
	i= valor-1;
	while(i<strlen(frase)){
		printf("%c",frase[i]);
		i=i+valor;
	}
	printf("\n");

    return 0;
}

