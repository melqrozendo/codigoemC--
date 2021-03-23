#include<stdio.h>
main(){
	int num, maior=0, menor=999999;
	printf("digite um numero:");
	scanf("%d",&num);
	while(num>=0){if(num>maior){maior=num;}
	if(num<menor){menor=num;}
	printf("digite um numero:");
	scanf("%d",&num);}
	printf("\n menor: %d", menor);
	printf("\n maior: %d", maior);
}
