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
#include <limits.h>


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
  	setlocale(LC_ALL, "");
	/*int max = INT MAX;
	int min = INT MIN;
	printf("Max dos inteiros = %d \n",max);
	printf("Min dos inteiros = %d \n",min);*/

	int nota;

	printf("Nota [0,100]? ");
	scanf("%d",&nota);
	
	if ((nota >= 0)&&(nota <= 100)){
		if (nota <= 45){
			printf("Não Satisfaz\n");
		} else if ((nota > 45) && (nota <= 55)){
			printf("satisfaz pouco \n");
		} else if((nota > 55) && nota <= 75){
			printf("Satisfaz\n");
		} else if((nota > 75) && nota <=85){
			printf("Bom \n");
		} else {
			printf("Muito Bom \n");
		}
	} else {
		printf("Valor da Nota incorreto!\n");	
	}
    return 0;
}

