#include <stdio.h>
#include <locale.h>

int main(){
	
//Ler em portugu�s
	setlocale(LC_ALL, "Portuguese");
	
//c�digo 
	int i, num[10];
	
	for(i = 0; i < 10; i++){
		printf("Digite um n�mero: ");
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
	 printf("A soma dos vetores pares �: %d\n", soma);
	 printf("A subtra��o dos vetores impares �: %d", sub);	
	

	

	
	
}
