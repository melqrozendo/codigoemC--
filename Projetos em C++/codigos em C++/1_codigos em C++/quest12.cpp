#include<stdio.h>
#include<math.h>
main(){//função do segundo grau
	int a,b,c,x, Raiz_delta,delta, x1,x2;
	printf("digite o valor de a:");scanf("%d",&a);
	printf("digite o valor de b:");scanf("%d",&b);
	printf("digite o valor de c:");scanf("%d",&c); 
	a*pow(x,2)+b*pow(x,1)+c;
	//delta da função
	delta=pow(b,2)-4*a*c;
	printf("delta: %d\n", delta);
	Raiz_delta=sqrt(delta);
	printf("raiz de delta: %d\n",Raiz_delta);
	if(delta>0){printf("duas raizes diferentes:\n");}
	else if(delta=0){printf("raizes iguais:\n");}
	else if(delta<0){printf("nao tem raizes:\n");}
	//x da função
	x1=(-(b)+Raiz_delta)/2*a;
	printf("x1: %d \n", x1);
	x2=(-(b)-Raiz_delta)/2*a;
	printf("x2: %d", x2);
}
