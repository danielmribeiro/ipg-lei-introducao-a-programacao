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
    char frase[100];
	int contaLetras[26];
	int i;
	char c;
	
	printf("Frase?");
	gets(frase);

	for(i=0;i<26;i++){
		contaLetras[i] = 0;
	}
/*
	for (c='a';c<='z';c++){
		contaLetras[c-'a'] = 0;
	}
*/
	for (i=0;i<strlen(frase);i++){
		if((frase[i]>='a')&&(frase[i]<='r')){
			contaLetras[frase[i]-'a']++;
		}
	}
	
	for (c='a';c<='z';c++){
		printf("A letra %c = %d\n",c,contaLetras[c-'a']);
	}

    return 0;
}

