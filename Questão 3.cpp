#include <stdio.h>
#include <locale.h>

int main(){
//Ler em portugu�s 

	setlocale(LC_ALL, "Portuguese");
	
//c�digo
	
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	
	printf("O n�mero em decimal �: %d \n", num);
	printf("O n�mero em octa �: %o \n", num);
	printf("O n�mero em hexadecimal �: %x \n", num);
}

