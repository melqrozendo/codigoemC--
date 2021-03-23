#include<stdio.h>
main(){
	float queijo, presunto, carne, sanduiches;
	printf("digite quantos sanduiches quer:");
	scanf("%f",& sanduiches);
	queijo=sanduiches*2*50/1000;
	printf("queijo: %.2f kg \n",queijo);
	presunto=sanduiches*50/1000;
	printf("presunto: %.2f kg \n",presunto);
	carne=sanduiches*100/1000;
	printf("carne: %.2f kg \n", carne);
}
