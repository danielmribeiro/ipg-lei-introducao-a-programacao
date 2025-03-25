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
#include <locale.h>

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
   
	setlocale(LC_ALL,"");

//Exercicio 1

/*
 	int num;
	printf("Introduza um numero de telefone válido [9 digitos]\n");
	scanf("%d", &num);
		if((num>=200000000)&&(num<300000000)){
			printf("Numero válido associado a rede fixa\n");
		}else if ((num>=910000000)&&(num<920000000)){
			printf("Numero válido associado à Vodafone\n");
		}else if ((num>=930000000)&&(num<940000000)){
			printf("Numero válido associado à NOS\n");
		}else if ((num>=960000000)&&(num<970000000)){
			printf("Numero válido associado à MEO\n");
		}else{
			printf("Numero inválido");
		}

*/

//Exercicio 2
/*
	int i, j, side;
	printf("Introduza um comprimento de lado");
	scanf("%d", &side);
	for(i=0;i<side;i++){
		for(j=0;j<side;j++){
			printf("#");
		}
		printf("\n");
	}
*/

//Exercicio 3
/*	
	int i, x[999], n, j;
	printf("Introduza o numero de Algarismos\n", n);
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Algarismo %d",i+1);
		scanf("%d", &x[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if (int aux = x[i];
				x[i] = x[j];
				x[j] = aux;

			}
		}
	}
	printf("--- Listagem ordenada ---\n");
	for(i=0;i<n;i++){
		printf("%d \n",x[i]);
	}



*/

	 return 0;
}

