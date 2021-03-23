#include<stdio.h>
main(){
	float massa;
	int seg=0;
	printf("digite a massa:");
	scanf("%f",& massa);
	//massa tem que ser maior que 0.5 para realizar a condição
	while(massa>0.5){massa=massa/2;seg=seg+30;}//fim do while
	//o contador de seg,
	printf("\n falta %d segundos", seg);
}
