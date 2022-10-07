#include <stdio.h>
#include <locale.h>

int main(){
//ler em português
	setlocale(LC_ALL, "Portuguese");
	
// código	
    int num, saque, debito = 100, saqueDebito = 0;
    
    printf("Qual a quantia que você quer sacar: ");
    scanf("%d",&num);
    
    saque = num;
    
    while (1){
        if (saque >= debito){
            saque-= debito;
            saqueDebito += 1;
        }
		else{
            printf("%d notas de R$%d foram sacadas\n", saqueDebito, debito);
            	if(debito == 100){
                	debito = 50;
            	}
				else if (debito == 50){
                	debito = 20;
            	}
				else if (debito == 20) {
                	debito = 10;

            	}
				else if (debito == 10){
                	debito = 5;
            	}
				else if(debito == 5){
                	debito =1;
            }
            saqueDebito = 0;
            if (saque == 0){
                break;
            }
        }
    }
}
