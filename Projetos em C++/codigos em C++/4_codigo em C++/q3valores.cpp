#include<stdio.h>
main(){
	float num;
	int i=0;
	while (i<3){
		printf("digite um numero:");
		scanf("%f", & num);
		printf("valor digitado %.2f \n", num);
		i=i+1;
	}
}
