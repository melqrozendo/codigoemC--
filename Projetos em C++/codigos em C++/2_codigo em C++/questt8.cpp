#include<stdio.h>
main(){
	int a,b,c;
	printf("digite o primeiro numero inteiro:");
	scanf("%d",&a);
	printf("digite o segundo numero inteiro:");
	scanf("%d",&b);
	printf("digite o terceiro numero inteiro:");
	scanf("%d",&c);
	if(a>b and a>c and b>c){printf("%d,",a);printf("%d,",b);printf("%d",c);}
	else if(a>b and a>c and c>b){printf("%d,",a);printf("%d,",c);printf("%d",b);}
	else if(b>c and b>a and c>a){printf("%d,",b);printf("%d,",c);printf("%d",a);}
	else if(b>c and b>a and a>c){printf("%d,",b);printf("%d,",a);printf("%d",c);}
	else if(c>a and c>b and a>b){printf("%d,",c);printf("%d,",a);printf("%d",b);}
    else if(c>a and c>b and b>a){printf("%d,",c);printf("%d,",b);printf("%d",a);}
	}
