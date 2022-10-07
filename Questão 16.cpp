#include <stdio.h>
#include <locale.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código

	int fatori, num;
	
	printf("Digite um número para saber sua fatoração: ");
	scanf("%d", &num);
	
	for( fatori = 1; num > 1; num = num - 1 ){
		fatori = fatori * num;
	}
	
	printf("\nFatorial calculado: %d", fatori);
}
