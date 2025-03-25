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

    int n, i, j;
	char  op;

	do{
		_clrscr();
		do{
			printf("Input? ");
			scanf("%d", &n);
			if ((n<1)||(n>20)){
				printf("Valor incorreto!\n");
			}
		}while((n<1)||(n>20));

		for (i=1;i<=n;i++){
			for (j=1;j<=n;j++){
				printf("%d",j);
			}
			printf("\n");
		}

		printf(" --DO-WHILE--\n");
		i=1;
		do{
			j=1;
			do{
				printf("%d",i);
				j++;
			}while(j<=n);
			printf("\n");
			i++;
		}while(i<=n);

			printf(" -- WHILE --\n");
			i=1;
			while(i<=n){
				j=1;
				while(j<=n){
					printf("%d",i);
					j++;
				}
				printf("\n");
				i++;
			}

		fflush(stdin);
		printf("Deseja repetir? (s/n)");
		scanf("%c",&op);
	}while(op=='s');

    return 0;
}
