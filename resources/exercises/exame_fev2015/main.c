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
#include <locale.h>

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
//FICHA FEVEREIRO 2015
//EX1
	/*
    int inicial, final, i;
	printf("Valor Inicial? ");
	scanf("%d",&inicial);
	printf("Valor Final? ");
	scanf("%d",&final);
	if(inicial>final){
		for(i=inicial;i>final;i-=1){
		printf(" %d"",",i);
		}
		printf(" %d",final);
	}else{
		for(i=final;i>inicial;i-=1){
		printf(" %d"",",i);
		}
		printf(" %d",inicial);
	}
	*/
	/*
//EX2
	int a,b,m,c,r,l;
	setlocale(LC_ALL,"");
	printf("Introduza o numero que pretende ver se é divisivel por 7\n");
	scanf("%d", &a);
	c=a/10;
	b=a%10;
	m=b*2;
	r=c-m;
	l=r%7;
	if(l==0){
		printf("%d (dobro de %d = %d, %d – %d = %d, e %d %% 7 = 0) Sim\n",a,b,m,c,m,r,r);
	}else{
		printf("%d (dobro de %d = %d, %d – %d = %d, e %d %% 7 = %d) Não\n",a,b,m,c,m,r,r,l);
	}
	*/
///////////////////////////////////////////////////////////////////////////EX3 (inacabado)
	int v[n],i;
	int m[f][g];
	if((n<25)||(n>0)){
		for(i=0;i<n;i++){
			do{
				printf("Valor?");
				scanf("%d",&v[i]);
				if((v[i]<-100)||(v[i]>100)){
					printf("Valor incorreto\n");
				}
			}while((v[i]<-100)||(v[i]>100));
		}
	}else{
		printf("Numero de elementos superior a 25");
    }

	//Exercicio59 – Introduzir dados numa matriz de dimensão n, de valores inteiros no intervalo [100, 100]. 
	
	int mat[5][5];
	int n, i, j;
	do{
		printf("Dimensão ?");
		scanf("%d", &n);
		if((n<=0)||(n>25)){
			printf("Valor incorreto? \n");
		}
	}while((n<=0)||(n>3));
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			do{
				printf("n[%d][%d]?",i,j);
				scanf("%d", &mat[i][j]);
				if((mat[i][j]<-100)||(mat[i][j]>100)){
					printf("Valor incorreto \n");
				}
			}while((mat[i][j]<-100)||(mat[i][j]>100));
		}
	}

	//Exercicio59.1 – Visualizar os dados em formato usual de matriz.
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d", mat[i][j]);
		}
		printf("\n");
	}
	//Exercicio59.2 – Visualizar a diagonal principal.
	for(i=0;i<n;i++){
		printf("%5d", mat[i][i]);
	}
	
	//Exercicio59.3 – Visualizar a diagonal secundária. 
	for(i=0;i<n;i++){
		printf("%5d", mat[i][n-1-i]);
	}
	
	//Exercicio59.4 – Maior elemento e respetiva posição.
	int maior=-101;
	int posMaiori=-1, posMaiorj=-1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(mat[i][j]>maior){
				maior=mat[i][j];
				posMaiori=i;
				posMaiorj=j;
			}
		}
	}printf("Maior = %d na posição %d,%d\n",maior, posMaiori, posMaiorj);
	
	//Exercicio59.5 – Menor elemento e respetiva posição.
	int menor=101;
	int posMenori=-1, posMenorj=-1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(mat[i][j]<menor){
				menor=mat[i][j];
				posMenori=i;
				posMenorj=j;
			}
		}
	}printf("Menor = %d na posição %d,%d\n",menor, posMenori, posMenorj);
	
	//Exercicio59.6 – Trocar duas linhas à escolha do utilizador.
	int linha1, linha2;
	do{
		printf("linha1?");
		scanf("%d", &linha1);
		if((linha1<0)||(linha1>n-1)){
			printf("Valor incorreto \n");
		}
	}while((linha1<0)||(linha1>n-1));
	do{
		printf("linha2?");
		scanf("%d", &linha2);
		if((linha2<0)||(linha2>n-1)){
			printf("Valor incorreto \n");
		}
	}while((linha2<0)||(linha2>n-1));
	for(j=0;j<n;j++){
		int aux=mat[linha1][j];
			mat[linha1][j]=mat[linha2][j];
			mat[linha2][j]=aux;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d", mat[i][j]);
		}
		printf("\n");
	}
	//Exercicio59.7 – Trocar duas colunas à escolha do utilizador
	int coluna1, coluna2;
	do{
		printf("coluna1?");
		scanf("%d", &coluna1);
		if((coluna1<0)||(coluna1>n-1)){
			printf("Valor incorreto \n");
		}
	}while((coluna1<0)||(coluna1>n-1));
	do{
		printf("coluna2?");
		scanf("%d", &coluna2);
		if((coluna2<0)||(coluna2>n-1)){
			printf("Valor incorreto \n");
		}
	}while((coluna2<0)||(coluna2>n-1));
	for(i=0;i<n;i++){
		int aux=mat[i][coluna1];
			mat[i][coluna1]=mat[i][coluna2];
			mat[i][coluna2]=aux;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d", mat[i][j]);
		}
		printf("\n");
	}
	
	//Exercicio59.8 - Calcular a soma de uma linha à escolha do utilizador.
	int soma=0;
	do{
		printf("linha1?");
		scanf("%d", &linha1);
		if((linha1<0)||(linha1>n-1)){
			printf("Valor incorreto \n");
		}
	}while((linha1<0)||(linha1>n-1));
	
	
	for(i=0;i<n;i++){
		soma=soma+mat[linha1][i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d", soma);
		}
		printf("\n");
	}

	return 0;
}

