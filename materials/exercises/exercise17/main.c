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
	int cilindrada, anoMatricula;
	float taxa;

	printf("Cilindrada do veiculo(cm3)? ");
	scanf("%d", &cilindrada);
	printf("Ano da matricula? ");
	scanf("%d", &anoMatricula);

	if ((cilindrada>0)&&(cilindrada<=100)){
			if ((cilindrada<=1981)&&(cilindrada<=1989)){
				taxa = 7.30;
			} else if (anoMatricula<=1995){
				taxa = 10.40;
			} else {
				taxa = 16.50;
			}
	} else if ((cilindrada<=1300)&&(cilindrada<=100)){
			if ((cilindrada<=1981)&&(cilindrada<=1989)){
				taxa = 10.40;
			} else if (anoMatricula<=1995){
				taxa = 18.60;
			} else {
				taxa = 33.10;
			}
	} else if (cilindrada<=1300){
			if ((cilindrada<=1981)&&(cilindrada<=1989)){
				taxa = 10.40;
			} else if (anoMatricula<=1995){
				taxa = 18.60;
			} else {
				taxa = 33.10;
			}
	} else {
			if ((cilindrada<=1981)&&(cilindrada<=1989)){
				taxa = 14.50;
			} else if (anoMatricula<=1995){
				taxa = 28.90;
			} else {
				taxa = 51.70;
			}
    }
	printf("Veiculo de cilindrada\t: %d (cm3)\n",cilindrada);
	printf("anoMatricula\n: %d\n",anoMatricula);
	printf("Total a Pagar\t\t: %.2f\n",taxa);

    return 0;
}

