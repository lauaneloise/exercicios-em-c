#include <stdio.h>
#include <locale.h>

int main(){
//Ler em portugu�s 

	setlocale(LC_ALL, "Portuguese");
	
//c�digo

	int num, i, quad;

	printf("Digite um n�mero: ");
	scanf("%d", &num);
 
	quad=0;
	for(i= 0; i < num; i++)
	{
    	quad = quad  + ((i *2) + 1);
	}
	printf("O quadrado do n�mero �: %d", quad);
}
