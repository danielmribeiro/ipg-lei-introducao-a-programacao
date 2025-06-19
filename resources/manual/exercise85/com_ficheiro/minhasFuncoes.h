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
	printf("10 - Escrever no ficheiro\n");
	printf("11 - Ler do ficheiro\n");
	printf("0 - Terminar\n");
	printf("\nEscolha uma opção? ");
	scanf("%d",&opcao);
	if ((opcao<0)||(opcao>11)){
		printf("Opção incorreta!\n");
		printf("Clique numa tecla para continuar ...");_getch();
	}
  }while((opcao<0)||(opcao>11));
  return opcao;
}

void lerFicheiro(DADOS t[100],int *n){
	FILE * f;
	int nr=0, i;

	if((f=fopen("Alunos.dat","r"))==NULL){
		printf("Erro na Leitura do ficheiro!...\n");
	} else {
		fseek(f,0,SEEK_END);
		nr = ftell(f) / sizeof(DADOS);
		fseek(f,0,SEEK_SET);
		for (i=0;i<nr;i++){
			fread(&t[i],sizeof(DADOS),1,f);
		}
		fclose(f);
	}
	*n = nr;
}

void escreverFicheiro(DADOS t[100],int n){
	FILE * f;
	int i;

	if((f=fopen("Alunos.dat","w"))==NULL){
		printf("Erro na Escrita do ficheiro!...\n");
	} else {
		for (i=0;i<n;i++){
			fwrite(&t[i],sizeof(DADOS),1,f);
		}
		fclose(f);
	}
}

