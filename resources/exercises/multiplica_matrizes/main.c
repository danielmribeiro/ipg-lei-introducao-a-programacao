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
    
	
	int mat1[10][10], mat2[10][10], mat3[10][10];
	int linha, coluna, i, acumula;
	do{
		printf("Dimensão ?");
		scanf("%d", &i);
		if((i<=0)||(i>10)){
			printf("Valor incorreto? \n");
		}
	}while((i<=0)||(i>10));
	for(linha=0;linha<i;linha++){
		for(coluna=0;coluna<i;coluna++){
			do{
				printf("i[%d][%d]?",linha,coluna);
				scanf("%d", &mat1[linha][coluna]);
				if((mat1[linha][coluna]<-100)||(mat1[linha][coluna]>100)){
					printf("Valor incorreto \n");
				}
			}while((mat1[linha][coluna]<-100)||(mat1[linha][coluna]>100));
		}
	for(linha=0;linha<i;linha++){
		for(coluna=0;coluna<i;coluna++){
			printf("%3d", mat1[linha][coluna]);
		}
		printf("\n");
	}
	}
	do{
		printf("Dimensão ?");
		scanf("%d", &i);
		if((i<=0)||(i>10)){
			printf("Valor incorreto? \n");
		}
	}while((i<=0)||(i>10));
	for(linha=0;linha<i;linha++){
		for(coluna=0;coluna<i;coluna++){
			do{
				printf("i[%d][%d]?",linha,coluna);
				scanf("%d", &mat2[linha][coluna]);
				if((mat2[linha][coluna]<-100)||(mat2[linha][coluna]>100)){
					printf("Valor incorreto \n");
				}
			}while((mat2[linha][coluna]<-100)||(mat2[linha][coluna]>100));
		}
	}
	for(linha=0;linha<i;linha++){
		for(coluna=0;coluna<i;coluna++){
			printf("%3d", mat2[linha][coluna]);
		}
		printf("\n");


	int acumula=0;
	
	for(linha=0;linha<i;linha++){
		acumula=acumula+mat1[linha][i]*mat2[i][coluna];
	}
	mat3[linha][coluna]=acumula;
	for(linha=0;linha<i;linha++){
		for(coluna=0;coluna<i;coluna++){
			printf("%3d", mat3[linha][coluna]);
		}
		printf("\n");
	}
	}
    return 0;
}
