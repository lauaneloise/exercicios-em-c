#include <stdio.h>
#include <locale.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código
	
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	
	printf("O número em decimal é: %d \n", num);
	printf("O número em octa é: %o \n", num);
	printf("O número em hexadecimal é: %x \n", num);
}

