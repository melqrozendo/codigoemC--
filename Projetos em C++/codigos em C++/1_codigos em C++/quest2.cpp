#include<stdio.h>
main(){
	float litros, valor, total;
	printf("digite a quantidade de litros:");
	scanf("%f",&litros);
	printf("digite o valor em reais por litro:");
	scanf("%f",&valor);
	total=litros*valor;
	printf("total a pagar:%.2f",total);
}
