#include <stdio.h>
#include <locale.h>

int main(){
//Ler em portugu�s 

	setlocale(LC_ALL, "Portuguese");
	
//c�digo

	int num, num2, ini=1;
	char skip = ' ';
	
	printf("Digite um valor maximo: ");
	scanf("%d", &num);
	
	num2 = num;
	
	if(num%2 !=0){
		for(int l = 0; l<((num/2.00)+0.5);l++){
			printf("\n");
			for(int i = 0; i<=ini; i++){
				printf(" ");
			}
			for(int i = ini; i<=num2; i++){
				printf("%d", i);
			}
			num2--;
			ini++;
		}
	}else{
		printf("O n�mero inserido n�o � impar");
	}
}
