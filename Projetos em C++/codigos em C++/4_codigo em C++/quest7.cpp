#include<stdio.h>
main(){
    int somapar=0,somaimpar=0;
    for (int x=1;x<=500;x++){if(x%2==0){somapar=somapar+x;}
    if(x%2!=0){somaimpar=somaimpar+x;}
	}//fim do for
	printf("\n soma dos par: %d", somapar);
	printf("\n soma dos impar: %d", somaimpar);
	
}
