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
#include <string.h>
#include <ctype.h>

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
	char frase[100];
	char letra;
	int contaLetra=0;
	int i;


	printf("Frase?\n");
	gets(frase);

	printf("Letra?");
	scanf("%c",&letra);

	for (i=0;i<strlen(frase);i++){
		if(frase[i]==letra){
			contaLetra++;
		}
	}

	printf("A letra %c aparece %d vezes\n",letra,contaLetra);
	//versao para letras minusculas e maiusculas
	
	char fraseMinusculas[100];
	letra=tolower(letra);
	contaLetra=0;

	for (i=0;i<strlen(frase);i++){
		if((frase[i]>='A')&&(frase[i]<='Z')){
			fraseMinusculas[i]=tolower (frase[i]);
		
		} else { 
			fraseMinusculas[i]=frase[i];
		}
	}
/*	
	for (i=0;i<strlen(frase);i++){
		if(fraseMinusculas[i]=tolower (frase[i]);
*/
		
		for (i=0;i<strlen(frase);i++){
		if(fraseMinusculas[i]==letra){
			contaLetra++;
		}
	}

	printf("A letra %c aparece %d vezes\n",letra,contaLetra);

	printf("Tamanho da frase:%d\n",strlen(frase));
	for (i=0; i<frase[i];i++){ //Atenção fim de string = falso
			printf("%c\n",frase[i]);
		}
    return 0;
}
