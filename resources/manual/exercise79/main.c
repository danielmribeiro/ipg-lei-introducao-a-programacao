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

void lerTemp(int t[100], int tamanho){
	int i;
	for (i=0;i<tamanho;i++){
		printf("Dia [%d] - Temperatura? ",i);
		scanf("%d",&t[i]);
	}
}
void escreverTemp(int t[100], int tamanho){
	int i;
	for (i=0;i<tamanho;i++){
		scanf("%d",&t[i]);
	}
}

int somaTemp(int t[100],int tamanho){
	int i,soma =0;
	for(i=0;i<tamanho;i++){
		soma = soma + t[i];
	}
	return soma;
}

void ordenar(int t[100],int tamanho){
	int i,j;
	for (j=0;i<tamanho-1;i++){
		for(j=i+1;j<tamanho;j++){
			if (t[i]>t[j]){
				int aux = t[i];
				t[i] = t[j];
				t[j] = aux;
			}
		}
	}
}

void ordenarXPTO(int t[100],int tamanho, char op){
	int i,j;
	for (j=0;i<tamanho-1;i++){
		for(j=i+1;j<tamanho;j++){
			if ((op=='c')||(op=='C')){
				if (t[i]>t[j]){
					int aux = t[i];
					t[i] = t[j];
					t[j] = aux;
				}
			} else if ((op=='d')||(op=='D')){
				if (t[i]<t[j]){
					int aux = t[i];
					t[i] = t[j];
					t[j] = aux;
				}
			}
		}
	}
}
int main(int argc, char *argv[])
{
	int temp[100];
	int x[100];
	int n;
	
	printf("Numero de elementos? ");
	scanf("%d",&n);

	lerTemp(x,n);
	lerTemp(temp,n);
	escreverTemp(temp,n);
	
	printf("A soma dos valores da temperatura = %d\n", somaTemp(temp,n));

	int soma = somaTemp(temp,n);
	printf("A soma dos valores da temperatura = %d\n", soma);

	printf("\n Crescente \n");	
	ordenar(temp,n);
	escreverTemp(temp,n);

	printf("\n Decrescente \n");	
	ordenarXPTO(temp,n,'D');
	escreverTemp(temp,n);



    return 0;
}

