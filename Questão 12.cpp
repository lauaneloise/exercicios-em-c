#include <stdio.h>
#include <locale.h>

int main(){
//Ler em portugu�s 

	setlocale(LC_ALL, "Portuguese");
	
//c�digo

	int idade_pedro, idade_joana, idade_ismael;
	
	printf("Digite a idade de Pedro: ");
	scanf("%d", &idade_pedro);
	printf("Digite a idade de Joana: ");
	scanf("%d", &idade_joana);
	printf("Digite a idade de Ismael: ");
	scanf("%d", &idade_ismael);
	
	if(idade_pedro > idade_joana & idade_pedro > idade_ismael){
		printf("Pedro � mais velho");
	}
	else if(idade_joana > idade_pedro & idade_joana > idade_ismael){
		printf("Joana � a mais velha");
	}
	else if(idade_ismael > idade_pedro & idade_ismael > idade_joana){
		printf("Ismael � mais velho");
	}
}
