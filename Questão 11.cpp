#include <stdio.h>
#include <locale.h>

int main(){
//Ler em portugu�s 

	setlocale(LC_ALL, "Portuguese");
	
//c�digo

	int aluno, aluna, alunes;
	
	printf("Digite o n�mero de alunos: ");
	scanf("%d", &aluno);
	printf("Digite o n�mero de alunas:");
	scanf("%d", &aluna);
	
	alunes = aluna + aluno;
	
	if(aluna > aluno){
		printf("O n�mero de alunas � maior que o de alunos");
		printf("a quantidade de alunos no total %d", alunes);
	}
	else if(aluno > aluna){
		printf("O n�mero de alunos � maior que o de alunas");
	}
	
	else if(aluna = aluno){
		printf("O n�mero de alunos e alunas � igual");
	}
}
