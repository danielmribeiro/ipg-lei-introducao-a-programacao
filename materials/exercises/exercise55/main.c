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
    int mat[10][10];
	int n,m;
	int i,j;

	printf("Numero de linhas");
	scanf("%d",&n);

	printf("Numero de colunas");
	scanf("%d",&m);

	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			do{
				printf("M[%d][%d]? ",i,j);
				scanf("%d",&mat[i][j]);
				if((mat[i][j]<-50)||(mat[i][j]>50)){
					printf("Valor incorreto!\n");
				}
			}while((mat[i][j]<-50)||(mat[i][j]>50));
		}
	}

	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("%4d",mat[i][j]);
		}
		printf("\n");
	}


    return 0;
}

