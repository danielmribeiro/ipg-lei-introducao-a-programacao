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
#include "minhasFuncoes.h"

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
   	setlocale(LC_ALL,"");
	DADOS tAlunos[100];
	int nAlunos, i;
	int op;
  do{
 	op = menu(); 
	
	if (op==1){ // Inserir Alunos
		printf("Quantos alunos? ");
		scanf("%d",&nAlunos);

		for (i=0;i<nAlunos;i++){
			printf("Numero? ");
			scanf("%d",&tAlunos[i].numero);
			fflush(stdin);
			printf("Nome? ");
			gets(tAlunos[i].nome);
		}
	} else if (op==2){ //Inserir Notas

		for (i=0;i<nAlunos;i++){
			printf("%d %s Nota? ",tAlunos[i].numero,tAlunos[i].nome);
			scanf("%f",&tAlunos[i].nota);
		}
	} else if (op==3){ //Visualizar todos os Alunos

		printf("--- Listagem dos Alunos ---\n");
		visualizacao(tAlunos,nAlunos);
		printf("Clique numa tecla para continuar ...");_getch();
		

	} else if (op==4){ // Ordenar por Nome
	
		ordenacao(tAlunos,nAlunos);

	} else if (op==5){ // Ordenar por Número		
	
		ordenacaoNumero(tAlunos,nAlunos);

	} else if (op==6){ // Calculo da média das notas

		float m = media(tAlunos,nAlunos);
		printf("Media das notas = %.1f\n",m);
		printf("Clique numa tecla para continuar ...");_getch();

	} else if (op==7){ // Numero de notas superior a um valor

		_clrscr();
		int valor;
		printf("Introduza valor? ");
		scanf("%d",&valor);

		printf("Numero de notas superior a %d = %d\n",valor, 
					numeroNotasSuperior(tAlunos,nAlunos,valor));
		printf("Clique numa tecla para continuar ...");_getch();

	} else if (op==8){ //Numero de notas num intervalo

		_clrscr();
		int min,max;
		printf("Valor minimo? ");
		scanf("%d",&min);
		printf("Valor maximo? ");
		scanf("%d",&max);

		printf("Numero de Notas entre [%d, %d] = %d\n",min,max,
								numeroNotasIntervalo(tAlunos,nAlunos,min,max));
		printf("Clique numa tecla para continuar ...");_getch();

	} else if (op==9){ // Percentagem de Aprovados
	
		printf("Percentagem de alunos Aprovados = %.1f\n",
								percentagemAprovados(tAlunos,nAlunos));
		printf("Clique numa tecla para continuar ...");_getch();

	} else {
		printf("Fim do Programa\n");
	}

  }while(op!=10);

  return 0;
}

