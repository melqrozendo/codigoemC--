#include<stdio.h>
#include<locale.h>
main(){setlocale(LC_ALL,"portuguese");
	int num1;
	printf("digite um numero inteiro entre 1 e 12:\n");
	scanf("%d", &num1);
	if(num1==1){printf("janeiro");}
	else if(num1==2){printf("fevereiro");}
	else if(num1==3){printf("março");}
	else if(num1==4){printf("abril");}
	else if(num1==5){printf("maio");}
	else if(num1==6){printf("junho");}
	else if(num1==7){printf("julho");}
	else if(num1==8){printf("agosto");}
	else if(num1==9){printf("setembro");}
	else if(num1==10){printf("outubro");}
	else if(num1==11){printf("novembro");}
	else if(num1==12){printf("dezembro");}
}
