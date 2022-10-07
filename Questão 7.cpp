#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código

	float nota1, nota2, media;
	int i=1, num_alunos;
	
	printf("Digite a quantidade de alunos da turma: ");
	scanf("%d", &num_alunos);
	

		while(i <= num_alunos){
		
		printf("\nDigite a primeira nota: ");
		scanf("%f", &nota1);
		
		if(nota1 >= 50){
		exit(0);
		}
		
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
		
		if((0<=nota1<= 10) && (0<=nota2<=10))
			media = (nota1 + nota2)/2.00;
		
		
		printf("\nA média do aluno %d é: %.2f \n", i, media);
		i++;
		}

}

	

