#include<stdio.h>
main(){
	float salario,soldo;
	printf("digite seu soldo:");
	scanf("%f",&soldo);
	printf("salario: %.2f reais\n", soldo);
	if(soldo<=600.00){salario=soldo* 1.30;}
    else if((soldo>=600.01 and soldo<=1100.00)){salario=soldo*1.25;}
    else if((soldo>=1100.01 and soldo<=2400.00)){salario=soldo*1.20;}
    else if((soldo>=2400.01 and soldo<=3550.00)){salario=soldo*1.15;}
    // salario maior que 3550.00
	else{salario=soldo* 1.10;}printf("salario: %.2f reais", salario);}
	
