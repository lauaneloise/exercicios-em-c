
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código

	int num1, num2, quadra_num1, quadra_num2, soma, produto, modulo;
	
	float  seno, raiz;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
 
	soma = num1 + num2;
	
	printf("A soma e: %d \n", soma);
	

	produto = num1 * quadra_num2;
	
	printf("O produto do primeiro número pelo quadrado do segundo é: %d \n", produto);
	

	quadra_num1 = num1 * num1;
	
	printf("O quadrado do primeiro número é: %d \n", quadra_num1);
	

	quadra_num2 = num2 * num2;
	
	printf("O quadrado do segundo número é: %d \n", quadra_num2);
	

	raiz = sqrt(quadra_num1 + quadra_num2);
	
	printf("A raiz da soma dos quadrados é: %.2f \n", raiz);
	
 
	seno = sin(num1 - num2);
	
	printf("O seno da diferenca do primeiro número pelo segundo é: %.2f \n", seno);
	
	modulo = abs(num1);
	
	printf("O modulo do primeiro número : %d", modulo);
	
}
