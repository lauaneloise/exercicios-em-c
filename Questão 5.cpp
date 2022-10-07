#include <stdio.h>

int main(){
	
	int a=0;
	
	printf("\t\t IMPRIMINDO TABELA ASCII\n");
	
	for(a = 0; a < 127 ; a++){

	
	printf("Decimal: %i  Octal: %o  Hexadecimal: %x  Caractere: %c \n", a, a ,a, a);
	}
		
	printf("\n\t\tFIM\n\n");
}