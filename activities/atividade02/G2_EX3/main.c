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
   

	int v[9];
	int num, numInicial;
	int digito,nd,i,j;
	printf("Introduza o numero? ");
	scanf("%d",&num);
	numInicial = num;
	//Contar os digitos do numero
	nd=0;
	i=8;
	do{
		digito = num % 10;
		v[nd]=digito;
		num = num / 10;
		nd++;
	}while(num!=0);

	for(i=0;i<nd-1;i++){
		for (j=i+1;j<nd;j++){
			if(v[i]<v[j]){
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	for(i=0;i<nd;i++){
		num = num * 10 + v[i];
	}
	printf("%d\n",num);

    return 0;
}

