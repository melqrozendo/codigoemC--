#include<stdio.h>
#include<locale.h>
main(){setlocale(LC_ALL,"portuguese");
	int num1;
	printf("digite um numero inteiro:");
	scanf("%d",&num1);
	if(num1%2==0){printf("é par");}
	else if(num1%2!=0){printf("é ímpar");}
}
