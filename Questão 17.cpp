#include <stdio.h>
#include <locale.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código

	int num, i, quad;

	printf("Digite um número: ");
	scanf("%d", &num);
 
	quad=0;
	for(i= 0; i < num; i++)
	{
    	quad = quad  + ((i *2) + 1);
	}
	printf("O quadrado do número é: %d", quad);
}
