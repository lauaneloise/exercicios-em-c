#include <stdio.h>
#include <locale.h>

int main(){
//Ler em portugu�s 

	setlocale(LC_ALL, "Portuguese");
	
//c�digo

	int num[5], i, maior;
	
	for(i = 0; i < 5; i++){
		printf("Digite um n�mero: ");
		scanf("%d", &num[i]);
	
		if(i == 0){
	        maior = num[0];				
		}
		else if( maior < num[i]){
	        maior =  num[i];
	    }

	}
	printf("O maior n�mero �: %d\n", maior);
}
