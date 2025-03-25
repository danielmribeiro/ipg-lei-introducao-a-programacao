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
#include <limits.h>

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
    /* Faça um programa que permita a leitura de notas [0,20] de vários alunos.*/
	int notas[100];
	int nAlunos, i;

	setlocale(LC_ALL,"");
	do{
		printf("Número de Alunos? ");
		scanf("%d",&nAlunos);
		if ((nAlunos<1)||(nAlunos>100)){
			printf("Valor incorreto\n");
			printf("Numero máximo 100\n");
		}
	}while((nAlunos<1)||(nAlunos>100));

	for (i=0;i<nAlunos;i++){
		do{
			printf("Nota do Aluno[%d]? ",i+1);
			scanf("%d",&notas[i]);
			if ((notas[i]<0)||(notas[i]>20)){
				printf("Valor da nota incorreto!\n");
				printf("Introduza valor [0,20]\n");
			}
		}while((notas[i]<0)||(notas[i]>20));
	}

/*
Exercicio40.1 – Escreva os valores anteriores com o aspeto seguinte:
Aluno 1 – Nota: 15
Aluno 2 – Nota: 12
Aluno 3 – Nota: 10
*/

	printf(" ---- Listagem dos Alunos ----\n");
	for(i=0;i<nAlunos;i++){
		printf("Aluno %d - Nota: %d\n",i+1,notas[i]);
	}

/*
Exercicio40.2 – Calcular e escrever a média das notas.
*/
	float media,soma=0;
	for(i=0;i<nAlunos;i++){
		soma = soma + notas[i]; //Equivale a: soma += notas[i];
 	}
	media = soma / nAlunos;
	printf("Média das notas = %.1f\n",media);

/*
Exercicio40.3 – Determinar a maior nota.
Exercicio40.4 – Determinar o aluno com a maior nota. 
*/
	int maior = INT_MIN; // incluir limits.h para menor = INT_MAX
	int posMaior = -1;
	for (i=0;i<nAlunos;i++){
		if (notas[i]>maior){
			maior = notas[i];
			posMaior = i;
		}
	}
	printf("A maior nota é: %d do Aluno %d\n",maior,posMaior+1);


/*
Exercicio40.5 – Determinar a menor nota.
Exercicio40.6 – Determinar o aluno com a menor nota. 
*/
	int menor = INT_MAX;
	int posMenor = -1;
	for (i=0;i<nAlunos;i++){
		if (notas[i]<menor){
			menor = notas[i];
			posMenor = i;
		}
	}
	printf("A menor nota é: %d do Aluno %d\n",menor,posMenor+1);

/*
Exercicio40.7 – Escrever todos os alunos com nota inferior à média. 
*/

	printf(" ---- Listagem dos Alunos com nota inferior à média ----\n");
	for(i=0;i<nAlunos;i++){
		if(notas[i]<media){
			printf("Aluno %d - Nota: %d\n",i+1,notas[i]);
		}
	}

/*
Exercicio40.8 – Escrever todos os alunos com nota superior à média.
*/
	
	printf(" ---- Listagem dos Alunos com nota superior à média ----\n");
	for(i=0;i<nAlunos;i++){
		if(notas[i]>media){
			printf("Aluno %d - Nota: %d\n",i+1,notas[i]);
		}
	}
/*
Exercicio40.9 – Ordenar e escrever as notas por ordem crescente.
*/
	int j;
	int numAluno[100];
	for(i=0;i<nAlunos;i++){
		numAluno[i] = i+1;
	}
	
	for(i=0;i<nAlunos-1;i++){
		for(j=i+1;j<nAlunos;j++){
			if (notas[i]>notas[j]){
				int aux = notas [i];
				notas[i] = notas [j];
				notas[j] = aux;
				aux = numAluno[i];
				numAluno[i] = numAluno[j];
				numAluno[j] = aux;
			}
		}
	}

	printf(" ---- Listagem dos Alunos ordenados por nota ----\n");
	for(i=0;i<nAlunos;i++){
		printf("Aluno %d - Nota: %d\n",numAluno[i],notas[i]);
	}

/*
Exercicio40.10 - Escrever a respetiva nota qualitativa de acordo com a seguinte tabela:
[0,6]  - Muito Fraco
]6,10[  - Fraco
[10,14[ - Razoável
[14,17[ - Bom
[17,20]  - Muito Bom
Exemplo:
Aluno 1 (15): Bom
Aluno 2 (12): Razoável
Aluno 3 (10): Razoável
*/
	
	printf(" --- Listagem dos Alunos ordenados por nota Qualitativa --- \n");
	for (i=0;i<nAlunos;i++){
		if (notas[i]<=6){
			printf("Aluno %d (%d) - Muito Fraco\n",numAluno[i],notas[i]);
		}else if (notas[i]<10){
			printf("Aluno %d (%d) - Fraco\n",numAluno[i],notas[i]);
		}else if (notas[i]<14){
			printf("Aluno %d (%d) - Razoável\n",numAluno[i],notas[i]);
		}else if (notas[i]<17){
			printf("Aluno %d (%d) - Bom\n",numAluno[i],notas[i]);
		}else
			printf("Aluno %d (%d) - Muito Bom\n",numAluno[i],notas[i]);
	}
/*
Exercicio40.11 – Escreva um gráfico, com o sinal +, para as notas. Exemplo:
Aluno 1 (15): +++++++++++++++
Aluno 2 (12): ++++++++++++
Aluno 3 (10): ++++++++++ 
*/
	printf("--- Listagem dos Alunos com gráfico ---\n");
	for(i=0;i<nAlunos;i++){
		printf("Aluno %d (%d) : ",numAluno[i],notas[i]);
		for (j=1;j<=notas[i];j++){
			printf("+");
		}
		printf("\n");
	}
	
	
/*
	--------------------------------------------------------------OU TAMBEM PODE SER-----------------------------------------------------------
	printf(" --- Gráfico das notas ---\n");
	for (i=0;i<nAlunos;i++){
	if (notas[i]==0){
			printf("Aluno %d (%d) - \n",numAluno[i],notas[i]);
		}else if (notas[i]==1){
			printf("Aluno %d (%d) - +\n",numAluno[i],notas[i]);
		}else if (notas[i]==2){
			printf("Aluno %d (%d) - ++\n",numAluno[i],notas[i]);
		}else if (notas[i]==3){
			printf("Aluno %d (%d) - +++\n",numAluno[i],notas[i]);
		}else if (notas[i]==4){
			printf("Aluno %d (%d) - ++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==5){
			printf("Aluno %d (%d) - +++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==6){
			printf("Aluno %d (%d) - ++++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==7){
			printf("Aluno %d (%d) - +++++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==8){
			printf("Aluno %d (%d) - ++++++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==9){
			printf("Aluno %d (%d) - +++++++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==10){
			printf("Aluno %d (%d) - ++++++++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==11){
			printf("Aluno %d (%d) - +++++++++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==12){
			printf("Aluno %d (%d) - ++++++++++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==13){
			printf("Aluno %d (%d) - +++++++++++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==14){
			printf("Aluno %d (%d) - ++++++++++++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==15){
			printf("Aluno %d (%d) - +++++++++++++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==16){
			printf("Aluno %d (%d) - ++++++++++++++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==17){
			printf("Aluno %d (%d) - +++++++++++++++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==18){
			printf("Aluno %d (%d) - ++++++++++++++++++\n",numAluno[i],notas[i]);
		}else if (notas[i]==19){
			printf("Aluno %d (%d) - +++++++++++++++++++\n",numAluno[i],notas[i]);
		}else
			printf("Aluno %d (%d) - ++++++++++++++++++++\n",numAluno[i],notas[i]);
		
	}
*/


/*
Exercicio[EXTRA] – Escreva um gráfico, com o sinal +[10,20] e -[0,10[ Exemplo:
Aluno 1 (15): +++++++++++++++
Aluno 2 (12): ++++++++++++
Aluno 3 (9): ---------
*/

	printf("--- Listagem dos Alunos com gráfico ---\n");
	for(i=0;i<nAlunos;i++){
		printf("Aluno %d (%d) : ",numAluno[i],notas[i]);
		for (j=1;j<=notas[i];j++){
			if (notas[i]<10){
				printf("-");
			}else{
				printf("+");
			} 
		}
		printf("\n");
	}

/*
Exercicio40.12 – Criar um novo vetor com 1, se nota é maior ou igual a 10, e 0 se a nota é inferior a 10.
*/

	printf("--- Listagem da nota Alunos com um vetor ---\n");
	for(i=0;i<nAlunos;i++){
		printf("Aluno %d (%d) : ",numAluno[i],notas[i]);
			if (notas[i]<10){
				printf("0");
			}else{
				printf("1");
			} 
		printf("\n");
	}

/*
Exercicio40.13 – Faça uma pesquisa linear de um uma dada nota. 
*/
	int notaspl;
	printf("---Pesquisa linear---");
		printf("Introduza a nota que pretende pesquisar");
		scanf("%d",&notaspl);
			for(i=0;i<nAlunos;i++){
				if (notas[i]==notaspl){
				printf("A nota %d foi obtida pelo aluno %d",notaspl,numAluno[i]);
			}
	}

    return 0;
}

