#include<stdio.h>
#include<math.h>
main(){
	const float pi=3;
	float raio, d, cc, ac;
	printf("qual o raio da circunferencia:");
	scanf("%f", &raio);
	//calcular o diametro
	d=raio*2;
	printf("diamentro: %.2f\n", d);
	//calcular o comprimento da circunferencia
	cc=2*pi*raio;
	printf("comprimento da circunferencia: %.2f\n",cc);
	//calcular a area da circunferencia
	ac=pi*pow(raio,2);
	printf("area da circunferencia: %.2f\n", ac);
}
