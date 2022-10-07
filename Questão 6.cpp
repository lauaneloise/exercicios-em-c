#include <stdio.h>
#include <locale.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código
	
	float num, infl, infl2 ,num_infl;
	
	printf("Digite o preço do produto: ");
	scanf("%f", &num);
	
	while(num < 100){
	
		
		infl = num * 0.1;
		
		num_infl = num+ infl;
		
		printf("O preço do produto com a inflação é de: %.2f", num_infl);
		break;
	}	
	while(num >= 100){
	
		
		infl = num * 0.2;
		
		num_infl = num+ infl;
		
		printf("O preÃ§o do produto com a inflação é de: %.2f", num_infl);
		break;
	}
}
	


