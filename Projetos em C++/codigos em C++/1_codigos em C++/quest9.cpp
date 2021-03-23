#include<stdio.h>
main(){
	float notaA,notaB,notaC,media;
	printf("digite a sua primeira nota:");
	scanf("%f",&notaA);
	printf("digite a sua segunda nota:");
	scanf("%f",&notaB);
	printf("digite a sua terceira nota:");
	scanf("%f",&notaC);
	media= (notaA+notaB+notaC)/3;
	printf("media: %.1f \n", media);
	if(media>=7){printf("aprovado");}
	else if(media<4){printf("reprovado");}
	else{printf("prova final");}}
