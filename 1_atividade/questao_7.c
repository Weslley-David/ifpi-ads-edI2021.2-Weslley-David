//7. Leia 3 (três) números, verifique e escreva o maior entre os números lidos.
#include<stdio.h>
#include<stdlib.h>
main(){
	float numero_1, numero_2, numero_3;
	float maior, menor;
	printf("Digite um numero     : ");
		scanf("%f", & numero_1);
	printf("Digite outro numero  : ");
		scanf("%f", & numero_2);
	printf("Digite mais um numero: ");
		scanf("%f", & numero_3);
	//bloco para saber o maior número.
	if(numero_1 > numero_2){
		maior = numero_1;
	}else{
		maior = numero_2;
	}
	if(maior < numero_3){
		maior = numero_3;
	}
	//bloco para saber o menor número.
	if(numero_1 < numero_2){
		menor = numero_1;
	}else{
		menor = numero_2;
	}
	if(menor > numero_3){
		menor = numero_3;
	}
	
	printf("Maior numero: %0.2f \n", maior);
	printf("Menor numero: %0.2f \n", menor);
	
}
