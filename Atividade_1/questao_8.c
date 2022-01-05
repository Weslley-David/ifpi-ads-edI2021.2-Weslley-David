//8. Leia 1 (um) número de 2 (dois) dígitos, verifique e escreva se o algarismo da dezena é igual ou diferente do algarismo da unidade.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char numero[2];
	printf("Digite um numero com apenas 2 digitos: ");
		scanf("%s", & numero);
	if(numero[0] == numero[1]){
		printf("Numeros iguais.");
	}else{
		printf("Numeros diferentes.");
	}
	}

