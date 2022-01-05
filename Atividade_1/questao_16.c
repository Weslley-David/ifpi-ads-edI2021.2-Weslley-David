//16. Leia o preço de três produtos e informe qual produto deve ser comprado, sabendo que a decisão é sempre pelo mais barato.
#include<stdio.h>
#include<stdlib.h>
main(){
	float produto_1, produto_2, produto_3;
	float menor_valor;
	printf("Primeiro produto: ");
		scanf("%f", & produto_1);
	printf("Segundo produto : ");
		scanf("%f", & produto_2);
	printf("Terceiro produto: ");
		scanf("%f", & produto_3);
	//bloco para saber o menor número.
	if(produto_1 < produto_2){
		menor_valor = produto_1;
	}else{
		menor_valor = produto_2;
	}
	if(menor_valor > produto_3){
		menor_valor = produto_3;
	}
	
	printf("O produto de menor valor tem preco igual a: %0.2f \n", menor_valor);
	
}
