#include<stdio.h>
main(){
	int num,cont=0,qtde=0;
	printf("digite um numero:");
	scanf("%d",&num);
	while(num!=1000)
	{if(num%2==0){printf("%d",num);cont++;}qtde++;
	printf("\ndigite um numero:");
	scanf("%d",&num);}
	printf("\ntotal de lidos:%d",qtde);
	printf("\ntotal de pares:%d",cont);
}
