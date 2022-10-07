#include <stdio.h>

int main()
{
    int Celsius, i;
    printf("Fahrenheit      Celsius\n\n");
    for(i = 40;i <=75; i++){
       Celsius=((i-32)*5)/9;
       printf("%d       |     %d\n",i,Celsius);
    }
}
