#include <stdio.h>
#include <locale.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código
	
	int num, i;
	
	printf("Digite um número positivo: ");
	scanf("%d", &num);
	
	for(int i = 1; i < num; i++){
		if(i%2==1){
			printf("%d\t", i);
		}	

	}
}
