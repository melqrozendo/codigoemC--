#include<stdio.h>
main(){
	int med=0,soma=0;
	do{soma=soma+med;
	printf("digite:");
	scanf("%d",&med);}//fim do DO
	while(med>=1);printf("\n final%d",soma);
}
