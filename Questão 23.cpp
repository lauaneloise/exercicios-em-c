#include <stdio.h>
#include <locale.h>

int main(){
	
//Ler em português
	setlocale(LC_ALL, "Portuguese");
	
//código 
	int i, num[6];
	
	for(i = 0; i < 6; i++){
		printf("Digite um número: ");
		scanf("%d", &num[i]);
	
	}
	
	for(i = 5; i > 0; i--){
		printf("%d\t", num[i]);
		
		}	
}
