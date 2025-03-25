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

	char palavra[50];
	char palavraInv[50];
	int i;
    printf("Palavra? ");
    scanf("%s",palavra);

	for(i=0;i<strlen(palavra);i++){
		palavraInv[i] = palavra[strlen(palavra)-1-i];
	}
	
	if(strcmp(palavra,palavraInv)==0){
		printf("Palavra e polindromo\n");
	} else {
		printf("Palavra e NAO polindromo\n");
    }

	//versao 2 Comparando os caracters
	int j,k;
	int polindromo = 1; //0- nao, 1-sim
	j = 0;
	k = strlen(palavra)-1;
	
	while((j<k)&& polindromo){
		if(palavra[j]!=palavra[k]){
			polindromo=0;
		}
		j++;
		k--;				
	}
	if(polindromo){
		printf("palavra e palindromo\n");
	} else {
			printf("palvra e NAO palindromo\n");
	}



    return 0;
}

