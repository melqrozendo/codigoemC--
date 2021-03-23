#include<stdio.h>
#include<locale.h>
main(){ setlocale(LC_ALL,"portuguese");
	int dia, mes, ano;
	char nome[30];
	printf("digite seu nome:");
	gets(nome);
	printf("digite o dia do seu aniversário:");
	scanf("%d", &dia);
	printf("digite o mês do seu aniversário:");
	scanf("%d", &mes);
	printf("digite o ano do seu aniversário:");
	scanf("%d", &ano);
	if(dia<=31 && mes<=12 && ano==2013){printf("a data é válida");}
	else{printf("a data não é válida");}
}
