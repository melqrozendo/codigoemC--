#include<stdio.h>
main(){
	int jog_1=-1, jog_2, ten;
	while(jog_1<1 || jog_1>100){
		printf("pense um numero valido:");
		scanf("%d", & jog_1);
	}
	for(ten=1; ten<=5; ten ++){
		printf("advinhe um numero:");
		scanf("%d", & jog_2);
		if(jog_2 > jog_1){
			printf("n maior \n");
		}else{
			if(jog_2< jog_1){
				printf("n menor \n");
			}else{
				printf("vc acertou!! \n");
				break;
			}
		}
	}
}
