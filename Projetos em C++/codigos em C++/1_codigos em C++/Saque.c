#include<stdio.h>
main(){
	int saque, nota50=0, resto, nota10=0,nota1=0;
	printf("digite o valor do saque:");
	scanf("%d", &saque);
	if(saque >= 50){
		nota50 = saque/50;
		resto = saque%50;
	if(resto >= 10){
		nota10 = resto/10;
		resto  = resto%10;}
		
		nota1 = resto;
		printf("nota de 50: %d\n", nota50);
		printf("nota de 10: %d\n", nota10);
		printf("nota de 1: %d\n", nota1);
	}else{printf("saque indisponivel \n");}
	
}
