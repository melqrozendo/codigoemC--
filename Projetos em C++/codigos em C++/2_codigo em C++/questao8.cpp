#include<stdio.h>
main(){//p é o pontos dos jogadores//d o valor do premio
	float p1,p2,p3,d1,d2,d3,soma,RG1;
	printf("digite seu RG:");
	scanf("%f",& RG1);
	printf("insira a potuacao do jogador1:");
	scanf("%f",&p1);
	printf("insira a potuacao do jogador2:");
	scanf("%f",&p2);
	printf("insira a potuacao do jogador3:");
	scanf("%f",&p3);
	soma=p1+p2+p3;
	d1=(p1/soma)*500000;
    d2=(p2/soma)*500000;
    d3=(p3/soma)*500000;
    printf("%.0f primeiro ganha %.2f\n", RG1, d1);
    printf("segundo ganha %.2f\n", d2);
    printf("terceiro ganha %.2f\n", d3);
}
