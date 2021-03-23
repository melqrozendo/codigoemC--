#include<stdio.h>
main(){
	int id,qtde=0,soma=0;
	float media;
	printf("digite a idade:");
	scanf("%d",&id);
	while(id!=0){soma=soma+id;
	qtde++;
	printf("digite a idade:");
	scanf("%d",&id);}//fim do while
	printf("\n pessoas:%d",qtde);
	media=soma/qtde;
	printf("\n media:%.1f",media);
}
