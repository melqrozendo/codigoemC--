#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	float peso, altura, imc;
	printf("digite seu peso:");
	scanf("%f", &peso);
	printf("digite sua altura:");
	scanf("%f", &altura);
	imc=(peso/pow(altura,2));
	if(imc<=18.49){
		printf("peso abixo do ideal\n");
	}else{
		if(imc>=18.5 && imc <=24.99){
			printf("peso ideal\n");
		}else{
			printf("obeso\n");
		}
	}
	return 0;
}
