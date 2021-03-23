#include<stdio.h>
main(){
	int idade, cont, menor, maior;
	float soma, media;
	printf("digite sua idade:");
	scanf("%d", &idade);
	menor = idade;
	soma = idade;
	maior = idade;
	for(cont=1; cont<5; cont++){
		printf("digite sua idade:");
		scanf("%d", & idade);
		soma = soma + idade;
		if(idade < menor){
			menor =idade;
		}
		if("idade > maior"){
			maior = idade;
		}
	}
	printf("soma das idades: %.f \n", soma);
	media =soma/5;
	printf("media das idades: %2.f \n", media);
	printf("menor idade: %d \n", menor);
	printf("maior idade: %d \n", maior);
	
}
