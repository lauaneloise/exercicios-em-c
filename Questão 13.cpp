#include <stdio.h>
#include <locale.h>

int main(){
//Ler em portugu�s 

	setlocale(LC_ALL, "Portuguese");
	
//c�digo
	
	int num, i;
	
	printf("Digite um n�mero positivo: ");
	scanf("%d", &num);
	
	for(int i = 1; i < num; i++){
		if(i%2==1){
			printf("%d\t", i);
		}	

	}
}
