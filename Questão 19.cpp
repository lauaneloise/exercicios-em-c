#include <stdio.h>
#include <locale.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código

	int num[5], i, maior;
	
	for(i = 0; i < 5; i++){
		printf("Digite um número: ");
		scanf("%d", &num[i]);
	
		if(i == 0){
	        maior = num[0];				
		}
		else if( maior < num[i]){
	        maior =  num[i];
	    }

	}
	printf("O maior número é: %d\n", maior);
}
