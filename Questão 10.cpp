#include <stdio.h>
#include <locale.h>


int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código
	int num;
	
	printf("Digite um número:");
	scanf("%d", &num);
	
	if(num%2==0){
		printf("O número é par\n");
		
		if(num<=15){
			printf("Número menor que 15");
		}
			
		else{
			printf("Número maior que 15");
		}
				
	}
	
	else{
		printf("O número é impar\n");
		
		if(num<=50){
			printf("Número menor que 50");
		}
		
		else{
			printf("Número maior que 50");
		}
	}
}
