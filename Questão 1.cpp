
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
//Ler em portugu�s 

	setlocale(LC_ALL, "Portuguese");
	
//c�digo

	int num1, num2, quadra_num1, quadra_num2, soma, produto, modulo;
	
	float  seno, raiz;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%d", &num2);
	
 
	soma = num1 + num2;
	
	printf("A soma e: %d \n", soma);
	

	produto = num1 * quadra_num2;
	
	printf("O produto do primeiro n�mero pelo quadrado do segundo �: %d \n", produto);
	

	quadra_num1 = num1 * num1;
	
	printf("O quadrado do primeiro n�mero �: %d \n", quadra_num1);
	

	quadra_num2 = num2 * num2;
	
	printf("O quadrado do segundo n�mero �: %d \n", quadra_num2);
	

	raiz = sqrt(quadra_num1 + quadra_num2);
	
	printf("A raiz da soma dos quadrados �: %.2f \n", raiz);
	
 
	seno = sin(num1 - num2);
	
	printf("O seno da diferenca do primeiro n�mero pelo segundo �: %.2f \n", seno);
	
	modulo = abs(num1);
	
	printf("O modulo do primeiro n�mero : %d", modulo);
	
}
