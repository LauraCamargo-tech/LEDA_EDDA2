#include <stdio.h>

struct Aluno{
  int mat_num;
	char nome[50];
	float p1,p2,p3;
};

struct Aluno preencheAluno(){
	struct Aluno a;
	printf("\n**Formulario de aluno**");
	printf("\nDigite a matricula : ");
	scanf("%d", &a.mat_num);

  printf("\nDigite o nome : ");
	scanf("%s", a.nome);
	
	printf("\nDigite a nota 1 : ");
	scanf("%f", &a.p1);

  printf("\nDigite a nota 2 : ");
	scanf("%f", &a.p2);

  printf("\nDigite a nota 3 : ");
	scanf("%f", &a.p3);
	return a;
}

void preencherVetor(struct Aluno a[]){
	int i = 0;
	for(i = 0; i < 5; i++){
		a[i] = preencheAluno();
	}
}

void exibirDados(struct Aluno a){
	printf("\nNome: %s - Matricula: %i, P1= %.2f, P2= %.2f, P3= %.2f", a.nome, a.mat, a.p1, a.p2, a.p3);
}

void imprimirVetor(struct Aluno a[]){
	int i = 0;
	for(i = 0; i < 5; i++){
		exibirDados(a[i]);
	}
}

void encontraMaior(struct Aluno a[]){
  int i = 0;
  float maior = 0;
	for(i = 0; i < 5; i++){
		if (a.p1)
	}
}

int main(){

  struct Aluno alunos[5];
	preencherVetor(alunos);
	imprimirVetor(alunos);

  return 0;
}

