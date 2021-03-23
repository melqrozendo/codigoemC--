#include<stdio.h>
main(){
	float tipo, litros, leite, polpa, adocante;
	printf("digite quantos litros vc quer:");
	scanf("%f", &litros);
	printf("qual iorgute vc quer, digite 1 morango ou 2 banana:");
	scanf("%f", &tipo);
	if(tipo==1)
	{leite=litros*0.70;
	polpa=litros*0.27;
	adocante=litros*0.03;}
	else if(tipo==2)
	{leite=litros*0.65;
	polpa=litros*0.33;
	adocante=litros*0.02;}
	printf("leite:%.3f\n",leite);
	printf("polpa:%.3f\n",polpa);
	printf("adocante:%.3f\n", adocante);
}
