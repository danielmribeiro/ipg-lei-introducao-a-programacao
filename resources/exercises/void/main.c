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

void lerVetor(int v[100], int tamanho){
	int i;
	for (i=0;i<tamanho;i++){
		printf("V[%d]? ",i);
		scanf("%d",&v[i]);
	}
}
void escreverVetor(int v[100], int tamanho){
	int i;
	for (i=0;i<tamanho;i++){
		scanf("%d",&v[i]);
	}
}

int somaVetor(int v[100],int tamanho){
	int i,soma =0;
	for(i=0;i<tamanho;i++){
		soma = soma + v[i];
	}
	return soma;
}

void ordenar(int v[100],int tamanho){
	int i,j;
	for (j=0;i<tamanho-1;i++){
		for(j=i+1;j<tamanho;j++){
			if (v[i]>v[j]){
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
}

void ordenarXPTO(int v[100],int tamanho, char op){
	int i,j;
	for (j=0;i<tamanho-1;i++){
		for(j=i+1;j<tamanho;j++){
			if ((op=='c')||(op=='C')){
				if (v[i]>v[j]){
					int aux = v[i];
					v[i] = v[j];
					v[j] = aux;
				}
			} else if ((op=='d')||(op=='D')){
				if (v[i]<v[j]){
					int aux = v[i];
					v[i] = v[j];
					v[j] = aux;
				}
			}
		}
	}
}
int main(int argc, char *argv[])
{
	int vetor[100];
	int x[100];
	int n;
	
	printf("Numero de elementos? ");
	scanf("%d",&n);

	lerVetor(x,n);
	lerVetor(vetor,n);
	escreverVetor(vetor,n);
	
	printf("A soma dos valores do vetor = %d\n", somaVetor(vetor,n));

	int soma = somaVetor(vetor,n);
	printf("A soma dos valores do vetor = %d\n", soma);

	printf("\n Crescente \n");	
	ordenar(vetor,n);
	escreverVetor(vetor,n);

	printf("\n Decrescente \n");	
	ordenarXPTO(vetor,n,'D');
	escreverVetor(vetor,n);



    return 0;
}

