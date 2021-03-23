#include<stdio.h>
main(){
	int num, prod=1;
	printf("digite um numero:");
	scanf("%d",&num);
	while(num!=0){prod=prod*num;
	printf("digite um numero:");
	scanf("%d",&num);}//fim do while
	printf("\n final %d", prod);

}
