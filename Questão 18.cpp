#include <stdio.h>
#include <locale.h>

int main(){
//Ler em portugu�s 

	setlocale(LC_ALL, "Portuguese");
	
//c�digo

    float nota[10];
    int i, soma;

    for (i=0 ; i<10 ; i++){
        printf("Digite Nota do aluno %d :", i);
        scanf("%f", &nota[i]);  
        	if(nota[i] < 0 || nota[i] >10){
        		
        		printf("\n\n ================Nota invalida================ \n");
        		
        		printf("Programa finalizado antes da hora. Come�e novamente\n \n");
        		
        		break;
			}
		soma = 0;	
		if (nota[i] >= 0 || nota[i] <= 10){
			
			int soma = 0;
			
			for(int i = 0;i < 10;i++) {
				
			   soma += nota[i];
			}
			
		
		} 

	}	
	printf("Soma dos n�meros: %d\n", soma);
}
