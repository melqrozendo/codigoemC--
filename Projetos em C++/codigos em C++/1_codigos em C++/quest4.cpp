#include<stdio.h>
main(){
	float p, m , g, valor;
	printf("digite a quantidade de camisas p:");
	scanf("%f",&p);
	printf("digite a quantidade de camisas m:");
	scanf("%f",&m);
	printf("digite a quantidade de camisas g:");
	scanf("%f",&g);
	valor=p*10+m*12+g*15;
	printf("valor %.2f reais",valor);
	
}
