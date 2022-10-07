#include <stdio.h>
#include <locale.h>


int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código
	int num1, num2, i;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	if(num1 < num2){
		for(i = num1; i <= num2; i++){
			printf("Número: %d\t\t", i);
		}
	}
	
	else if(num2 < num1){
		for(i = num1; i > num2; i--){
			printf("Número: %d\t\t", i);
		}
	}
	else if (num1 = num2){
		printf("Os números são iguais");
	}
}
