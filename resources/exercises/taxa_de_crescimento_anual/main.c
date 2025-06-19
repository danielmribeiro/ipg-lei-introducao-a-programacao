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
    int nA, nB, tA, tB, i;
	//p-PopulaçãoIgual a-Anos tB-TaxaEmB tA-TaxaemA nA-NumeroEmA nB-NumeroEmB
	printf("Escreva o numero de habitantes do país (A) cujo o numero de população é menor que (B)");
	scanf("%d", &nA);
	printf("Taxa de crescimento populacional do país (A) maior que (B)");
	scanf("%d", &tA);
	printf("Escreva o numero de habitantes do país (B) cujo o numero de população é maior que (A)");
	scanf("%d", &nB);
	printf("Taxa de crescimento populacional do país (B) menor que (A)");
	scanf("%d", &tB);
	i=0;
	do{
		nA=nA+nA*tA/100.0;
		nB=nB+nB*tB/100.0;
		printf("%d\n", i);
		i++;
	}while(nA<=nB);
    return 0;
}

