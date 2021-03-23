#include<stdio.h>
main(){
	 float c, e1,e0,media;
	 float c1, p, pb,icms;
	printf("digite o valor de e1 kwh:");
	scanf("%f",& e1);
	printf("digite o valor de e0 kwh:"); //fixar kwh do mês anterior com novo programa
	scanf("%f",& e0);
	c=e1-e0;
	printf("\nConsumo de %.2f kwh", c);
	//media de kwh pelo consumo do mês
	media=c/30;
	printf("\nMedia de consumo por dia: %.2f kwh", media);
	p=0.67315022;
	printf("\nPreco por kwh: R$%.2f", p);
	pb=13.65;
	printf("\nAcres. de iluminacao publica de: R$%.2f",pb);
	icms=0.99;
	printf("\nAcres. de taxa(icms): R$%.2f",icms);
	//resultado de c multiplicar por p
	c1=c*p+pb+icms;
	if(c>=100){c1=c1+2.66;printf("\nCom acresc. de BANDEIRA amarela = R$2.66");}
    else{printf("\nSem acresc. de BANDEIRA amarela");}
	printf("\nTotal a pagar: R$%.2f\n",c1);
}
