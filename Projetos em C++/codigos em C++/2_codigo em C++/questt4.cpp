#include<stdio.h>
main(){
	int idade; 
	float peso;
	printf("digite sua idade:");
	scanf("%d", &idade);
	printf("digite seu peso:");
	scanf("%f", &peso);
	if(18<idade and idade<67 and peso>50){printf("voce pode doar sangue");}
	else{printf("nao pode doar sangue");}
}
