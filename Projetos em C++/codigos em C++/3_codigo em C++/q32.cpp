#include<stdio.h>
main(){
	int flag=1;
	while(flag==1){
		int jog_1=-1, jog_2, ten;

	while(jog_1<1 || jog_1>100){
		printf("pense um numero valido:");
		scanf("%d", & jog_1);
	}
	for(ten=1; ten<=5; ten ++){
		printf("advinhe um numero:");
		scanf("%d", & jog_2);
		if(jog_2==jog_1+1 || jog_2==jog_1-1){
			printf("esta quente \n");
		}else{
			if(jog_2==jog_1){
				printf("vc acertou!! \n");
				break;
			}else{
				printf("esta frio \n");
				
			}
		}
	}
	printf("deseja jogar novamente: 0: nao| 1: sim :");
	scanf("%d", & flag);
}
}
