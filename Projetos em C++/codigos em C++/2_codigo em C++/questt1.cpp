#include<stdio.h>
#include<locale.h>
main(){setlocale(LC_ALL, "portuguese");
	int a,b,c;
	printf("digite o primeiro numero:");
	scanf("%d", &a);
	printf("digite o segundo numero:");
	scanf("%d", &b);
	printf("digite o terceiro numero:");
	scanf("%d", &c);
	if(a>b and a>c and c>b){printf("o primeiro é maior e o segundo é menor");}
	else if(a>b and a>c and b>c){printf("o primeiro é maior e o terceiro é menor");}
	else if(b>c and b>a and c>a){printf("o segundo é maior e o primeiro é menor");}
	else if(b>c and b>a and a>c){printf("o segundo é maior e o terceiro é menor");}
	else if(c>a and c>b and b>a){printf("o terceiro é maior e o primeiro é menor");}
	else if(c>a and c>b and a>b){printf("o terceiro é maior e o segundo é menor");}
}
