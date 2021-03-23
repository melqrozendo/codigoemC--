#include<stdio.h>
#include<stdlib.h>
main(){
	int num,c,p;
	printf("digite um numero positivo:");
	scanf("%d",&num);
	c=1;
	p=c*c;
	while(p<num){
		c++;
		p=c*c;
	}
	if(p==num)
	printf("o numero e quedrado perfeito");
	else
	printf("o numero nao e quadrado perfeito");
	return 0;
	
}
