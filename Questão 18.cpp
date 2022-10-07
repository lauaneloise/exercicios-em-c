#include <stdio.h>
#include <locale.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código

    float nota[10];
    int i, soma;

    for (i=0 ; i<10 ; i++){
        printf("Digite Nota do aluno %d :", i);
        scanf("%f", &nota[i]);  
        	if(nota[i] < 0 || nota[i] >10){
        		
        		printf("\n\n ================Nota invalida================ \n");
        		
        		printf("Programa finalizado antes da hora. Começe novamente\n \n");
        		
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
	printf("Soma dos números: %d\n", soma);
}
