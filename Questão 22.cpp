#include <stdio.h>
#include <locale.h>

int main(){
	
//Ler em português
	setlocale(LC_ALL, "Portuguese");
	
//código 
	int i, num[10];
	
	for(i = 0; i < 10; i++){
		printf("Digite um número: ");
		scanf("%d", &num[i]);
		
	}
	
	int soma = 0, sub = 0;
	
	for(i = 0; i < 10; i++){
		if( i %2 == 0){
			soma += num[i];
			 
		}
		else { 
			sub -= num[i];
		}
	}
	 printf("A soma dos vetores pares é: %d\n", soma);
	 printf("A subtração dos vetores impares é: %d", sub);	
	

	

	
	
}
