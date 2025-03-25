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

	int limSuperior = nAlunos;
	int limInferior = 0;
	int palpite;
	int resposta;
	int nVezes = 0;
	
	do{
		palpite=(limSuperior+limInferior)/2;
		printf("Palpite %d\n", notas[palpite]);
		printf("[1-menor;2-maior;3-acertou]\n");
		scanf("%d",&resposta);
			if (resposta==1){
				limSuperior = palpite;
			} else if (resposta==2){
				limInferior = palpite;
			}
			nVezes++;
		}while(resposta!=3);

	printf("Acertei em %d vezes\n",  nVezes);

    return 0;
}

