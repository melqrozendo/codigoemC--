#include<stdio.h>
main(){
	int num;
	
	
	while(num < 1 || num >10){
		printf("digite um numero valido:");
		scanf("%d", & num);
		
	}
	printf("numero digitado: %d \n", num);
}
