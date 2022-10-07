#include <stdio.h>
#include <locale.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código

	int media, num[10];
	
	for(int i = 0; i < 10; i++){
		printf("Digite um número: ");
		scanf("%d", &num[i]);
	}
	
	media = (num[0] + num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8] + num[9]) / 10;
	
	if(num[0] = media){
		printf("O número %d e igual a média total", num[0]);
	}
	
	else if(num[1] = media){
		printf("O número %d e igual a média total", num[1]);
	}
	
	else if(num[2] = media){
		printf("O número %d e igual a média total", num[2]);
	}
	
	else if(num[3] = media){
		printf("O número %d e igual a média total", num[3]);
	}
	
	else if(num[4] = media){
		printf("O número %d e igual a média total", num[4]);
	}
	
	else if(num[5] = media){
		printf("O número %d e igual a média total", num[5]);
	}
	
	else if(num[6] = media){
		printf("O número %d e igual a média total", num[6]);
	}
	
	else if(num[7] = media){
		printf("O número %d e igual a média total", num[7]);
	}
	
	else if(num[8] = media){
		printf("O número %d e igual a média total", num[8]);
	}
	
	else if(num[9] = media){
		printf("O número %d e igual a média total", num[9]);
	}
	
	
}
