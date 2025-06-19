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
   	int hp, mp, sp, hv, mv, sv, hc, mc, sc,total;
	printf("Hora de Partida\n");
	printf("Hora");
	scanf("%d" ,&hp);
	printf("Minuto");
	scanf("%d" ,&mp);
	printf("segundo");
	scanf("&d" ,&sp);
	printf("Tempo de Viagem\n");
	printf("Hora");
	scanf("%d" ,&hv);
	printf("Minuto");
	scanf("&d" ,&mv);
	printf("segundo");
	scanf("&d" ,&sv);
	total=hp*60*60+mp*60+sp+hv*3600+mv*60+sv;
	hc=total/3600;
	total=total%3600;
	mc=total/60;
	sc=total%60;
	printf("Hora de chegada: %d %d &d", hc,mc,sc);

    return 0;
}

