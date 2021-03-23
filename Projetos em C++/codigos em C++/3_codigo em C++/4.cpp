#include<stdio.h>
main(){
	int n,i;
	float soma=0, aux=5;
	printf("digite o termo:");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		soma= soma + (i/(aux+5));
		aux=aux+5;
	}
	printf("%.2f", soma);
}
