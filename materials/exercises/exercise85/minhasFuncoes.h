#include <conio.h>


typedef struct {
	int numero;
	char nome[60];
	float nota;
} DADOS;

void trocaRegisto(DADOS *a, DADOS *b){
	DADOS aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void ordenacao(DADOS t[100],int n){
	int i,j;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (strcmp(t[i].nome,t[j].nome)>0){
				trocaRegisto(&t[i],&t[j]);
			}
		}
	}
}

void ordenacaoNumero(DADOS t[100],int n){
	int i,j;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (t[i].numero > t[j].numero){
				trocaRegisto(&t[i],&t[j]);
			}
		}
	}
}
void visualizacao(DADOS t[100],int n){
	int i;
	for (i=0;i<n;i++){
		printf("%d %s %.1f \n",t[i].numero,t[i].nome,t[i].nota);
	}
}

float media(DADOS t[100],int n){
	int i;
	float soma = 0;
	for (i=0;i<n;i++){
		soma = soma + t[i].nota;
	}
	return soma / n;
}

int numeroNotasSuperior(DADOS t[100],int n, int valor){
	int i;
	int conta = 0;
	for (i=0;i<n;i++){
		if (t[i].nota > valor) conta++;
	}
	return conta;
}

int numeroNotasIntervalo(DADOS t[100],int n, float min, float max){
	int i;
	int conta = 0;
	for (i=0;i<n;i++){
		if ((t[i].nota >= min)&&(t[i].nota <= max)) conta++;
	}
	return conta;
}

float percentagemAprovados(DADOS t[100],int n){
	return ((float)numeroNotasSuperior(t,n,9) / n) * 100;
}

int menu(){
  int opcao;
  do{
		_clrscr();
	printf("--- Menu -------------------------\n");
	printf("1 - Inserir Alunos\n");
	printf("2 - Inserir Notas\n");
	printf("3 - Visualizar todos os Alunos\n");
	printf("4 - Ordenar por nome\n");
	printf("5 - Ordenar por número\n");
	printf("6 - Calcular a média das notas\n");
	printf("7 - Número de notas superiores a um valor\n");
	printf("8 - Número de notas num intervalo\n");
	printf("9 - Percentagem de aprovados\n");
	printf("10 - Terminar\n");
	printf("\nEscolha uma opção? ");
	scanf("%d",&opcao);
	if ((opcao<1)||(opcao>10)){
		printf("Opção incorreta!\n");
		printf("Clique numa tecla para continuar ...");_getch();
	}
  }while((opcao<1)||(opcao>10));
  return opcao;
}


