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

typedef struct {
	int numero;
	char nome[60];
	float nota;
} DADOS;

int main(int argc, char *argv[])
{
    DADOS tAlunos[100];
	int nAlunos;
	int i;
	FILE *f;


	//Introdução de dados no ficheiro Alunos.dat

	printf("Quantos alunos? ");
	scanf("%d",&nAlunos);

	for (i=0;i<nAlunos;i++){
		printf("Numero? ");
		scanf("%d",&tAlunos[i].numero);
		fflush(stdin);
		printf("Nome? ");
		gets(tAlunos[i].nome);
		printf("Nota? ");
		scanf("%f",&tAlunos[i].nota);
	}

	if ((f=fopen("Alunos.dat","a+"))==NULL){
		printf("Erro na abertura do ficheiro!...\n");
		return 0;
	}
	
	for (i=0;i<nAlunos;i++){
		fwrite(&tAlunos[i],sizeof(DADOS),1,f);
	}

	fclose(f);

	// Leitura do ficheiro Alunos.dat
	int nregistos;
	DADOS r;

	if ((f=fopen("Alunos.dat","a+"))==NULL){
		printf("Erro na abertura do ficheiro!...\n");
		return 0;
	}

	fseek(f,0,SEEK_END);
	nregistos = ftell(f) / sizeof(DADOS);

	fseek(f,0,SEEK_SET);
	for (i=0;i<nregistos;i++){
		fread(&r,sizeof(DADOS),1,f);
		printf("Numero: %d \t Nome: %s \t Nota: %.1f\n",r.numero,r.nome,r.nota);
	}

	fclose(f);


	

    return 0;
}

