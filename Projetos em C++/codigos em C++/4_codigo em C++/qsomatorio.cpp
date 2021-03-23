#include<stdio.h>
#include<math.h>
main(){
	int x;
	float soma=0;
	for(x=2; x<=5; x++){
		soma =soma + (pow(2,x) + (3*x)/2 - (x/3));
	}
	printf("resultado do somatorio: %.2f \n", soma);
}
