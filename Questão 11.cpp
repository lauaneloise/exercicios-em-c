#include <stdio.h>
#include <locale.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código

	int aluno, aluna, alunes;
	
	printf("Digite o número de alunos: ");
	scanf("%d", &aluno);
	printf("Digite o número de alunas:");
	scanf("%d", &aluna);
	
	alunes = aluna + aluno;
	
	if(aluna > aluno){
		printf("O número de alunas é maior que o de alunos");
		printf("a quantidade de alunos no total %d", alunes);
	}
	else if(aluno > aluna){
		printf("O número de alunos é maior que o de alunas");
	}
	
	else if(aluna = aluno){
		printf("O número de alunos e alunas é igual");
	}
}
