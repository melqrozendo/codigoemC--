#include<stdio.h>
main(){
	int idade;
	printf("digite a idade do jogador:");
	scanf("%d",&idade);
	if(10<=idade and idade<=14){printf("infantil");}
    else if(15<=idade and idade<=17){printf("juvenil");}
    else if(18<=idade and idade<=40){printf("adulto");}
    else if(idade>=41){printf("master");}
}
