#include<stdio.h>
main(){
	float agua, suco, litros;
	printf("digite quantos litros quer: ");
	scanf("%f",&litros);
	agua=litros*4/5;
	printf("agua: %.1f litros \n", agua);
	suco=litros*1/5;
	printf("suco: %.1f litros",suco);
	
}
