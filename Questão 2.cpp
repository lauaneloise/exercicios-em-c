#include<stdio.h>
#include <locale.h>

int main(){
//Ler em portugu�s 

	setlocale(LC_ALL, "Portuguese");
	
//c�digo

	float temp_f, temp_c, temp_k;
	
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &temp_f);
	
	printf("A temperatura em Fahrenheit �: %.2f \n", temp_f);
	
	//Celsius
	temp_c = (temp_f-32)/1.8;
	
	printf("A temperatura em Celsius �: %.2f \n", temp_c);
	
	//Kelvin
	
	temp_k = temp_c + 273;
	
	printf("A temperatura em Kelvin �: %.2f ", temp_k);
}
