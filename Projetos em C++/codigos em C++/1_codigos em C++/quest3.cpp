#include<stdio.h>
main(){
	float nota1, nota2, nota3, media,media1;
	printf("digite a sua primeira nota:");
	scanf("%f",&nota1);
	printf("digite a sua segunda nota:");
	scanf("%f",&nota2);
	printf("digite a sua terceira nota:");
	scanf("%f",&nota3);
	media=nota1*1+nota2*2+nota3*3;
	media1=media/6;
	printf("media:%.1f",media1);
}
