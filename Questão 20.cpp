#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
//Ler em português 

	setlocale(LC_ALL, "Portuguese");
	
//código

   char nome_1[56], nome_2[56];
   
   printf("Digite um nome: ");
   scanf("%s", &nome_1);
   printf("Digite outro nome: ");
   scanf("%s", &nome_2);
   
   
   if((int)nome_1[0] < (int)nome_2[0]){
   	
     printf("%s\n%s", nome_1, nome_2);
     
	}
   else{
   	 printf("%s\n%s", nome_2, nome_1);
     
   }
   

}
