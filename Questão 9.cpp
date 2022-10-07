#include <stdio.h>
#include <locale.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código

	float nota1, nota2, nota3, ME, MA;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	
	ME = (nota1 + nota2 + nota3)/3;
	
	MA = (nota1 + nota2*2 + nota3*3 +ME)/7;
	
	if (MA >= 9){
		printf("A nota é: A");
	}
	else if(MA >= 7.6){
		printf("A nota é: B");
	}
	else if(MA >= 6){
		printf("A nota é: C");
	}
	else if(MA >= 4){
		printf("A nota é: D");
	}
	else if (MA < 4){
		printf("A nota é: E");
	}
}
