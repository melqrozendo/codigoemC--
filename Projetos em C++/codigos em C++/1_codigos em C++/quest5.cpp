#include<stdio.h>
main(){
	float salario1, aumento, desconto, salario2, salario3;
	printf("digite o valor do salario:");
	scanf("%f",&salario1);
	printf("salario: %.2f reais\n", salario1);
	aumento= salario1*1.15;
	printf("aumento: %.2f reais\n", aumento);
	desconto=aumento*1.08;
	salario2= desconto-aumento;
	salario3=aumento-salario2;
	printf("salario final: %.2f reais\n", salario3);

}
