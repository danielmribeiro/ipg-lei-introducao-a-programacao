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
#include<locale.h>
#include<string.h>

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
	


//Exercicio1

/*
	int num;
	printf("Introduza um numero de telefone válido [9 digitos]\n");
	scanf("%d", &num);
	if((num>=200000000)&&(num<300000000)){
		printf("numero atribuido a rede fixa");
	}else if((num>=910000000)&&(num<920000000)){
		printf("numero atribuido à vodafone");
	}else if((num>=930000000)&&(num<940000000)){
		printf("numero atribuido à NOS");
	}else if((num>=960000000)&&(num<970000000)){
		printf("numero atribuido à MEO");
	}else
		printf("numero não atribuido");
*/

	
//Exercicio1(FORMA ALTERNATIVA MAIS COMPLEXA)
	
/*
	char num[9];
	int tamanho;
	printf("Introduza um numero de telemóvel\n");
	gets(num);
	tamanho = strlen(num);
	printf("Tamanho = %d\n",tamanho);
	if (tamanho==9){
		if (num[0]=='2'){
			printf("Numero da rede fixa");
		}else if ((num[0]=='9')&&(num[1]=='1')){
			printf("Numero da Vodafone");
		}else if ((num[0]=='9')&&(num[1]=='3')){
			printf("Numero da NOS");
		}else if ((num[0]=='9')&&(num[1]=='6')){
			printf("Numero da MEO");
		}else {
			printf("Numero incorreto!");
		}
	} else {
		printf("Numero incorreto!\n");
	}

*/
/*
	int num, numInicial;
	int digito,nd;
	printf("Introduza o numero de telemovel? ");
	scanf("%d",&num);
	numInicial = num;
	//Contar os digitos do numero
	nd =0;
	do{
		digito = num % 10;
		num = num / 10;
		nd++;
	}while(num!=0);

	if (nd==9){
		if (numInicial/100000000==2){
			printf("Numero da rede fixa\n");
		}else if (numInicial/10000000==91){
			printf("Numero da Vodafone\n");
		}else if (numInicial/10000000==93){
			printf("Numero da NOS\n");
		}else if (numInicial/10000000==96){
			printf("Numero da MEO\n");
		}else {
			printf("Numero incorreto!\n");
		}
	} else {
		printf("Numero incorreto!\n");
	}
*/

	int telemovel[9]=[-1,-1,-1,-1,-1;-1,-1,-1,-1];
	int num, numInicial;
	int digito,nd,i;
	printf("Introduza o numero de telemovel? ");
	scanf("%d",&num);
	numInicial = num;
	//Contar os digitos do numero
	nd =0;
	i=8;
	do{
		digito = num % 10;
		telemovel[i]=digito;
		i--;
		num = num / 10;
		nd++;
	}while(num!=0);

	if (nd==9){
		if (telemovel[0]=='2'){
			printf("Numero da rede fixa");
		}else if ((telemovel[0]==9)&&(telemovel[1]==1)){
			printf("Numero da Vodafone");
		}else if ((telemovel[0]==9)&&(telemovel[1]==3)){
			printf("Numero da NOS");
		}else if ((telemovel[0]==9)&&(telemovel[1]==6)){
			printf("Numero da MEO");
		}else {
			printf("Numero incorreto!");
		}
	} else {
		printf("Numero incorreto!\n");
	}

    return 0;
}

