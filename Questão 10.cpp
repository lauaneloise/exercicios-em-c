#include <stdio.h>
#include <locale.h>


int main(){
//Ler em portugu�s 

	setlocale(LC_ALL, "Portuguese");
	
//c�digo
	int num;
	
	printf("Digite um n�mero:");
	scanf("%d", &num);
	
	if(num%2==0){
		printf("O n�mero � par\n");
		
		if(num<=15){
			printf("N�mero menor que 15");
		}
			
		else{
			printf("N�mero maior que 15");
		}
				
	}
	
	else{
		printf("O n�mero � impar\n");
		
		if(num<=50){
			printf("N�mero menor que 50");
		}
		
		else{
			printf("N�mero maior que 50");
		}
	}
}
