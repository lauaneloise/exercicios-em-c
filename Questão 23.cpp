#include <stdio.h>
#include <locale.h>

int main(){
	
//Ler em portugu�s
	setlocale(LC_ALL, "Portuguese");
	
//c�digo 
	int i, num[6];
	
	for(i = 0; i < 6; i++){
		printf("Digite um n�mero: ");
		scanf("%d", &num[i]);
	
	}
	
	for(i = 5; i > 0; i--){
		printf("%d\t", num[i]);
		
		}	
}
