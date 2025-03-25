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
	int limSuperior = 101;
	int limInferior = 0;
	int palpite;
	int resposta;
	int nVezes = 0;
	
	printf("---JOGO ADIVINHA NUMERO---\n");
	printf("Pense num Numero [0,100]\n");

	do{
		palpite=(limSuperior+limInferior)/2;
		printf("Palpite %d\n", palpite);
		printf("[1-menor;2-maior;3-acertou]\n");
		scanf("%d",&resposta);
			if (resposta==1){
				limSuperior = palpite;
			} else if (resposta==2){
				limInferior = palpite;
			}
			nVezes++;
		}while(resposta!=3);

	printf("Acertei em %d vezes\n",  nVezes);
				
	
			
	
    return 0;
}

