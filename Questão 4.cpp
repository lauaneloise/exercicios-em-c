#include <stdio.h>
#include <locale.h>


int main(){
//Ler em portugu�s 

	setlocale(LC_ALL, "Portuguese");
	
//c�digo
	int num1, num2, i;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%d", &num2);
	
	if(num1 < num2){
		for(i = num1; i <= num2; i++){
			printf("N�mero: %d\t\t", i);
		}
	}
	
	else if(num2 < num1){
		for(i = num1; i > num2; i--){
			printf("N�mero: %d\t\t", i);
		}
	}
	else if (num1 = num2){
		printf("Os n�meros s�o iguais");
	}
}
