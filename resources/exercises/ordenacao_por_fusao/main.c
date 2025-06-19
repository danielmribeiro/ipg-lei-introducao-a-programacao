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
    int x[100];
	int y[100];
	int z[100];
	int ix,iy,iz,nx,ny,nz;
	int i,j;

	printf("Número de elementos de X? ");
	scanf("%d",&nx);
	for (i=0;i<nx;i++){
		printf("X[%d]? ",i);
		scanf("%d",&x[i]);
	}
	for (i=0;i<nx-1;i++){
		for (j=i+1;j<nx;j++){
			if (x[i]>x[j]){
				int aux = x[i];
				x[i] = x[j];
				x[j] = aux;
			}
		}
	}
	printf("--- Vetor X ordenado ---\n");
	for (i=0;i<nx;i++){
		printf("%d \n",x[i]);
	}

	printf("Número de elementos de Y? ");
	scanf("%d",&ny);
	for (i=0;i<ny;i++){
		printf("Y[%d]? ",i);
		scanf("%d",&y[i]);
	}
	for (i=0;i<ny-1;i++){
		for (j=i+1;j<ny;j++){
			if (y[i]>y[j]){
				int aux = y[i];
				y[i] = y[j];
				y[j] = aux;
			}
		}
	}
	printf("--- Vetor Y ordenado ---\n");
	for (i=0;i<ny;i++){
		printf("%d \n",y[i]);
	}

	// Ordenação por fusão
	ix=0;
	iy=0;
	iz=0;
	while((ix<nx)&&(iy<ny)){
		if (x[ix]<=y[iy]){
			z[iz] = x[ix];
			ix++;
		} else {
			z[iz] = y[iy];
			iy++;
		}
		iz++;
	}
	while(ix<nx){
		z[iz] = x[ix];
		ix++;
		iz++;
	}
	while(iy<ny){
		z[iz] = y[iy];
		iy++;
		iz++;
	}
	printf("--- Vetor Z ordenado por fusão ---\n");
	nz = nx + ny;
	for (i=0;i<nz;i++){
		printf("%d \n",z[i]);
	}

    return 0;
}

