#include<stdio.h>
main(){
	int num, cont, contpar=0, contimpar=0;
	for(cont=0; cont<5; cont++){
		printf("digite um numero:");
		scanf("%d", &num);
		if(num == 0){
			printf("zero \n");
		}else{
			if(num %2 ==0){
				contpar = contpar+1;
			}else{
				contimpar =contimpar+1;
			}
		}
	}
	printf("QTDE par: %d \n", contpar);
	printf("QTDE impar: %d \n", contimpar);
}
