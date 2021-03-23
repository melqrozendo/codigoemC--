#include<stdio.h>
#include<math.h>
main(){
	float peso, altura, imc;
	int i, cont=0;
	for(i=0; i<3; i++){
		printf("digite seu peso:");
		scanf("%f", & peso);
		printf("digite sua altura:");
		scanf("%f",& altura);
		imc = peso/ pow(altura,2);
		printf("seu imc: %.2f\n", imc);
		if(imc <= 18.5){
			cont = cont +1;
		}
	}
	printf("QTD de pessoas abaixo do peso: %d\n", cont);
}
