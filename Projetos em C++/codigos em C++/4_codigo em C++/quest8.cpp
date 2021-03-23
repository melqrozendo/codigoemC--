#include<stdio.h>
main(){
    int pro,sexo, sim=0, nao=0, Fem=0,Mas=0;
    float pF,pM;
    for (int y=1;y<=2000; y++)
	{printf("produto?");
	scanf("%d",&pro);
	if(pro==1){sim++;}
	else{nao++;}
	printf("genero?");
	scanf("%d",&sexo);
	if(sexo==1){Fem++;}
	else{Mas++;}
	}//fim do for
	printf("\n quant de sim:%d", sim);
	printf("\n quant de nao:%d", nao);
	pF=(Fem*100)/2000;
	pM=(Mas*100)/1000;
	printf("\n fem:%f",Fem);
	printf("\n mas:%f",Mas);
	
}
