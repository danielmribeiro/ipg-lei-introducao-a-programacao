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
	char fraseCod[100];
	int codigo,i;
	int c;

	printf("frase?\t");
	gets(frase);
	
	printf("Código?\t");
	scanf("%d",&codigo);

	for (i=0;i<strlen(frase);i++){
		c = ' ';
		if ((frase[i]>='a')&&(frase[i]<='z')){
			c = frase[i]+codigo;
			if (c> 'z'){
				c = c - 'z' + 'a';
			}
		}else if ((frase[i]>='A')&&(frase[i]<='Z')){
			c = frase[i]+codigo;
			if (c> 'Z'){
				c = c - 'Z' + 'A';
			}
		}
		fraseCod[i]=c;
	}

	printf("Frase codificada: %s \n", fraseCod);


		
    return 0;
}

