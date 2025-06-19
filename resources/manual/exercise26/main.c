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
#include <conio.h>

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
    int tabuada;
	int i;
	int opcao;
	
	do{
		_clrscr();
		do{
			printf("Tabuada [1,10]?");
			scanf("%d",&tabuada);
			if ((tabuada<1)||(tabuada>10)){
				printf("Valor Incorreto!!!\n");
			}
		}while((tabuada<1)||(tabuada>10));
		_clrscr();
		printf("-- FOR --\n");
		for (i=1;i<=10;i++){
			printf("%d x %d = %d\n",tabuada,i,tabuada*i);
		}
		printf("--DO-WHILE --\n");
		i=1;
		do{
			printf("%d x %d = %d\n", tabuada,i,tabuada*i);
			i++
		} while (i<=10);
		

		printf("-- WHILE --\n");
		i=1;
		while(i<=10){
			printf("%d x %d = %d\n", tabuada,i,tabuada*i);
			i++;
		};

		fflush(stdin);
		printf("Deseja continuar(s/n)? ");
		scanf("%c",&opcao);
	} while (opcao=='s');
	return 0;
}

