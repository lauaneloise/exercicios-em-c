#include <stdio.h>
#include <locale.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código

	int idade_pedro, idade_joana, idade_ismael;
	
	printf("Digite a idade de Pedro: ");
	scanf("%d", &idade_pedro);
	printf("Digite a idade de Joana: ");
	scanf("%d", &idade_joana);
	printf("Digite a idade de Ismael: ");
	scanf("%d", &idade_ismael);
	
	if(idade_pedro > idade_joana & idade_pedro > idade_ismael){
		printf("Pedro é mais velho");
	}
	else if(idade_joana > idade_pedro & idade_joana > idade_ismael){
		printf("Joana é a mais velha");
	}
	else if(idade_ismael > idade_pedro & idade_ismael > idade_joana){
		printf("Ismael é mais velho");
	}
}
