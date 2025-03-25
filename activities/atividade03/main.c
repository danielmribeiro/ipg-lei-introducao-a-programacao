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
  	/*
	//EXERCICIO 1
	int lado1, lado2, lado3;
	printf("Escreva o lado 1: ");
	scanf("%d", &lado1);
	printf("Escreva o lado 2: ");
	scanf("%d", &lado2);
	printf("Escreva o lado 3: ");
	scanf("%d", &lado3);
	setlocale(LC_ALL,"");
	if((lado1+lado2<lado3)||(lado2+lado3<lado1)||(lado1+lado3<lado2)){
		printf("O triângulo não é válido\n");
	}else{
		if((lado1==lado2)&&(lado2==lado3)){
			printf("O triângulo é equilátero\n");
		}else{
			if((lado1!=lado2)&&(lado2!=lado3)&&(lado1!=lado3)){
				printf("O triângulo é escaleno\n");
			}else{
				printf("O triângulo é isósceles\n");
			}
		}
	}
	*/
	
	/*
	//EXERCICIO2

	int num, dimp1, dimp2, dimp3, dimp4, resultado;
	printf("N?");
	scanf("%d",&num);
	if((num<500)||(num>9000)){
		printf("Número Inválido!\n");
		printf("Introduza um valor no intervalo [500,9000]\n") 
	}else{
		dimp1=num%10;
		num=num/10;
		dimp2=num%10;
		num=num/10;
		dimp3=num%10;
		num=num/10;
		dimp4=num%10;
		if((dimp1=0)||(dimp1=2)||(dimp1=4)||(dimp1=6)||(dimp1=8))&&((dimp2=0)||(dimp2=2)||(dimp2=4)||(dimp2=6)||(dimp2=8))&&((dimp3=0)||(dimp3=2)||(dimp3=4)||(dimp3=6)||(dimp3=8))&&((dimp4=0)||(dimp4=2)||(dimp4=4)||(dimp4=6)||(dimp4=8)){
			printf("Não há produto de numeros impares");
		}else{
			if((dimp1=0)||(dimp1=2)||(dimp1=4)||(dimp1=6)||(dimp1=8))&&((dimp2=0)||(dimp2=2)||(dimp2=4)||(dimp2=6)||(dimp2=8))&&((dimp3=0)||(dimp3=2)||(dimp3=4)||(dimp3=6)||(dimp3=8))&&((dimp4=1)||(dimp4=3)||(dimp4=5)||(dimp4=7)||(dimp4=9)){
				printf("Não há produto de numeros impares");
			}else{
				if((dimp1=0)||(dimp1=2)||(dimp1=4)||(dimp1=6)||(dimp1=8))&&((dimp2=0)||(dimp2=2)||(dimp2=4)||(dimp2=6)||(dimp2=8))&&((dimp3=1)||(dimp3=3)||(dimp3=5)||(dimp3=7)||(dimp3=9))&&((dimp4=0)||(dimp4=2)||(dimp4=4)||(dimp4=6)||(dimp4=8)){
					printf("Não há produto de numeros impares");
				}else{
					if((dimp1=0)||(dimp1=2)||(dimp1=4)||(dimp1=6)||(dimp1=8))&&((dimp2=1)||(dimp2=3)||(dimp2=5)||(dimp2=7)||(dimp2=9))&&((dimp3=0)||(dimp3=2)||(dimp3=4)||(dimp3=6)||(dimp3=8))&&((dimp4=0)||(dimp4=2)||(dimp4=4)||(dimp4=6)||(dimp4=8)){
						printf("Não há produto de numeros impares");
					}else{
						if((dimp1=1)||(dimp1=3)||(dimp1=5)||(dimp1=7)||(dimp1=9))&&((dimp2=0)||(dimp2=2)||(dimp2=4)||(dimp2=6)||(dimp2=8))&&((dimp3=0)||(dimp3=2)||(dimp3=4)||(dimp3=6)||(dimp3=8))&&((dimp4=0)||(dimp4=2)||(dimp4=4)||(dimp4=6)||(dimp4=8)){
							printf("Não há produto de numeros impares");
						}else{
							if((dimp1=1)||(dimp1=3)||(dimp1=5)||(dimp1=7)||(dimp1=9))&&((dimp2=1)||(dimp2=3)||(dimp2=5)||(dimp2=7)||(dimp2=9))&&((dimp3=0)||(dimp3=2)||(dimp3=4)||(dimp3=6)||(dimp3=8))&&((dimp4=0)||(dimp4=2)||(dimp4=4)||(dimp4=6)||(dimp4=8)){
								resultado=dimp1*dimp2;
								printf("Produto dos dígitos ímpares: %d x %d = %d", dimp1, dimp2, resultado);
							}else{
								if((dimp1=1)||(dimp1=3)||(dimp1=5)||(dimp1=7)||(dimp1=9))&&((dimp2=0)||(dimp2=2)||(dimp2=4)||(dimp2=6)||(dimp2=8))&&((dimp3=1)||(dimp3=3)||(dimp3=5)||(dimp3=7)||(dimp3=9))&&((dimp4=0)||(dimp4=2)||(dimp4=4)||(dimp4=6)||(dimp4=8)){
								resultado=dimp1*dimp3;
								printf("Produto dos dígitos ímpares: %d x %d = %d", dimp1, dimp3, resultado);
								}else{
									if((dimp1=1)||(dimp1=3)||(dimp1=5)||(dimp1=7)||(dimp1=9))&&((dimp2=0)||(dimp2=2)||(dimp2=4)||(dimp2=6)||(dimp2=8))&&((dimp3=0)||(dimp3=2)||(dimp3=4)||(dimp3=6)||(dimp3=8))&&((dimp4=1)||(dimp4=3)||(dimp4=5)||(dimp4=7)||(dimp4=9)){
									resultado=dimp1*dimp4;
									printf("Produto dos dígitos ímpares: %d x %d = %d", dimp1, dimp4, resultado);
									}else{
										if((dimp1=0)||(dimp1=2)||(dimp1=4)||(dimp1=6)||(dimp1=8))&&((dimp2=1)||(dimp2=3)||(dimp2=5)||(dimp2=7)||(dimp2=9))&&((dimp3=1)||(dimp3=3)||(dimp3=5)||(dimp3=7)||(dimp3=9))&&((dimp4=0)||(dimp4=2)||(dimp4=4)||(dimp4=6)||(dimp4=8)){
										resultado=dimp2*dimp3;
										printf("Produto dos dígitos ímpares: %d x %d = %d", dimp2, dimp3, resultado);
										}else{
											if((dimp1=0)||(dimp1=2)||(dimp1=4)||(dimp1=6)||(dimp1=8))&&((dimp2=1)||(dimp2=3)||(dimp2=5)||(dimp2=7)||(dimp2=9))&&((dimp3=0)||(dimp3=2)||(dimp3=4)||(dimp3=6)||(dimp3=8))&&((dimp4=1)||(dimp4=3)||(dimp4=5)||(dimp4=7)||(dimp4=9)){
											resultado=dimp2*dimp4;
											printf("Produto dos dígitos ímpares: %d x %d = %d", dimp2, dimp4, resultado);
											}else{
												if((dimp1=0)||(dimp1=2)||(dimp1=4)||(dimp1=6)||(dimp1=8))&&((dimp2=0)||(dimp2=2)||(dimp2=4)||(dimp2=6)||(dimp2=8))&&((dimp3=1)||(dimp3=3)||(dimp3=5)||(dimp3=7)||(dimp3=9))&&((dimp4=1)||(dimp4=3)||(dimp4=5)||(dimp4=7)||(dimp4=9)){
												resultado=dimp3*dimp4;
												printf("Produto dos dígitos ímpares: %d x %d = %d", dimp3, dimp4, resultado);
												}else{
													if((dimp1=1)||(dimp1=3)||(dimp1=5)||(dimp1=7)||(dimp1=9))&&((dimp2=1)||(dimp2=3)||(dimp2=5)||(dimp2=7)||(dimp2=9))&&((dimp3=1)||(dimp3=3)||(dimp3=5)||(dimp3=7)||(dimp3=9))&&((dimp4=0)||(dimp4=2)||(dimp4=4)||(dimp4=6)||(dimp4=8)){
													resultado=dimp1*dimp2*dimp3;
													printf("Produto dos dígitos ímpares: %d x %d x %d = %d", dimp1, dimp2, dimp3, resultado);
													}else{
														if((dimp1=1)||(dimp1=3)||(dimp1=5)||(dimp1=7)||(dimp1=9))&&((dimp2=1)||(dimp2=3)||(dimp2=5)||(dimp2=7)||(dimp2=9))&&((dimp3=0)||(dimp3=2)||(dimp3=4)||(dimp3=6)||(dimp3=8))&&((dimp4=1)||(dimp4=3)||(dimp4=5)||(dimp4=7)||(dimp4=9)){
														resultado=dimp1*dimp2*dimp4;
														printf("Produto dos dígitos ímpares: %d x %d x %d = %d", dimp1, dimp2, dimp4, resultado);
														}else{
															if((dimp1=1)||(dimp1=3)||(dimp1=5)||(dimp1=7)||(dimp1=9))&&((dimp2=0)||(dimp2=2)||(dimp2=4)||(dimp2=6)||(dimp2=8))&&((dimp3=1)||(dimp3=3)||(dimp3=5)||(dimp3=7)||(dimp3=9))&&((dimp4=1)||(dimp4=3)||(dimp4=5)||(dimp4=7)||(dimp4=9)){
															resultado=dimp1*dimp3*dimp4;
															printf("Produto dos dígitos ímpares: %d x %d x %d = %d", dimp1, dimp3, dimp4, resultado);
															}else{
																if((dimp1=0)||(dimp1=2)||(dimp1=4)||(dimp1=6)||(dimp1=8))&&((dimp2=1)||(dimp2=3)||(dimp2=5)||(dimp2=7)||(dimp2=9))&&((dimp3=1)||(dimp3=3)||(dimp3=5)||(dimp3=7)||(dimp3=9))&&((dimp4=1)||(dimp4=3)||(dimp4=5)||(dimp4=7)||(dimp4=9)){
																resultado=dimp2*dimp3*dimp4;
																printf("Produto dos dígitos ímpares: %d x %d x %d = %d", dimp2, dimp3, dimp4, resultado);
																}else{
																	if((dimp1=1)||(dimp1=3)||(dimp1=5)||(dimp1=7)||(dimp1=9))&&((dimp2=1)||(dimp2=3)||(dimp2=5)||(dimp2=7)||(dimp2=9))&&((dimp3=1)||(dimp3=3)||(dimp3=5)||(dimp3=7)||(dimp3=9))&&((dimp4=1)||(dimp4=3)||(dimp4=5)||(dimp4=7)||(dimp4=9)){
																	resultado=dimp1*dimp2*dimp3*dimp4;
																	printf("Produto dos dígitos ímpares: %d x %d x %d x %d = %d", dimp1, dimp2, dimp3, dimp4, resultado);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						}
				}
			}
		}
	}							
	*/
																													
    return 0;
}

