#include <stdio.h>
#include <locale.h>

int main(){
//Ler em portugu�s 

	setlocale(LC_ALL, "Portuguese");
	
//c�digo

	int fatori, num;
	
	printf("Digite um n�mero para saber sua fatora��o: ");
	scanf("%d", &num);
	
	for( fatori = 1; num > 1; num = num - 1 ){
		fatori = fatori * num;
	}
	
	printf("\nFatorial calculado: %d", fatori);
}
