#include <stdlib.h>
#include <stdio.h>
#include<locale.h>
int main (void)
{setlocale(LC_ALL,"portuguese");
int num1, num2;
printf("digite um numero inteiro: ");
scanf("%d",&num1);
printf("digite outro numero inteiro: ");
scanf("%d",&num2);
if((num1%2==0 and num2%2==0)){printf("os dois sao Pares");}
else if((num1%2==0 and num2%2!=0)){printf("o primeiro e par, o segundo e impar");}
else if((num1%2!=0 and num2%2==0)){printf("o primeiro e impar, o segundo e par");}
else if((num1%2!=0 and num2%2!=0)){printf("os dois sao impar");}
}
