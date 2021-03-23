#include<stdio.h>
main(){
    int prod,sexo, sim=0, nao=0, Fem=0,Mas=0;
    float pF,pM;
    for (int y=1;y<=2; y++)
	{printf("vc gostou do novo produto?");
	scanf("%d",&prod);
	if(prod==1){sim++;}
	if(prod==2){nao++;}
	printf("qual o seu genero?");
	scanf("%d",&sexo);
	if(sexo==1){Fem++;}
	if(sexo==2){Mas++;}
	}//fim do for
	printf("\n quant de sim:%d", sim);
	printf("\n quant de nao:%d", nao);
	pF=(Fem*100)/2;
	pM=(Mas*100)/2;
	printf("\n fem:%.0fpor cento",pF);
	printf("\n mas:%.0fpor cento",pM);
	
}
