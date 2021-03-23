#include<stdio.h>
main(){
	float sal,media=1,soma=0,MM,SM=0;
	int qtde=0;
	while (media>0)
	{for(int j=1;j<=12;j++){printf("digite o salario:");
	scanf("%f",&sal);
	soma=soma+sal;}//fim do for
	media=soma/12;
	if(media>0){media=soma/12;SM=SM-media;qtde++;}
	soma=0;
	}//fim do while
	MM=SM/qtde;
	printf("\n media final%f",MM);
}
