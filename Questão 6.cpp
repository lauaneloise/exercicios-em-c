#include <stdio.h>
#include <locale.h>

int main(){
//Ler em portugu�s 

	setlocale(LC_ALL, "Portuguese");
	
//c�digo
	
	float num, infl, infl2 ,num_infl;
	
	printf("Digite o pre�o do produto: ");
	scanf("%f", &num);
	
	while(num < 100){
	
		
		infl = num * 0.1;
		
		num_infl = num+ infl;
		
		printf("O pre�o do produto com a infla��o � de: %.2f", num_infl);
		break;
	}	
	while(num >= 100){
	
		
		infl = num * 0.2;
		
		num_infl = num+ infl;
		
		printf("O preço do produto com a infla��o � de: %.2f", num_infl);
		break;
	}
}
	


