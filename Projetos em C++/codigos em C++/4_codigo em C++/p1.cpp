#include<stdio.h>
main(){
	int num, cont=0;
	printf("digite um valor:");
	scanf("%d",&num);
	for(int i=1; i<=num; i++)
	{if(num%i==0){cont++;}}//fim do for
	//se foi divisivel por ele mesmo e por 1,com resto zero
	//se o contator de divisão deu apenas 2 divisões, então é primo.
	if(cont==2){printf("\nnumero primo");}
	else{printf("\nnumero nao primo");}
	//se é par ou ímpar
	if(num%2==0){printf("\npar");}
	if(num%2!=0){printf("\nimpar");}
}
