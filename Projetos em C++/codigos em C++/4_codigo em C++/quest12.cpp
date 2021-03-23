#include<stdio.h>
main(){
	int id,idgordo,idmagro;
	float p, pgordo=0,pmagro=0;
	for(int k=1;k<=3;k++)
	{printf("digite o id:");
	scanf("%d",&id);
	printf("digite o peso:");
	scanf("%f",&p);
	if(pgordo>p){idgordo=id;}
	}//fim do for
	printf("\n o id do mais gordo:%d", idgordo);
    printf("\n o id do mais magro:%d", idmagro);
}
