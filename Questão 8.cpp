#include <stdio.h>
#include <locale.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código

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
		printf("O número inserido não é impar");
	}
}
