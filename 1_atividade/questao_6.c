//6. Leia 2 (dois) números, verifique e escreva o menor e o maior entre os números lidos.
#include<stdio.h>
#include<stdlib.h>
main(){
	float numero_1, numero_2;
	printf("Digite um numero: ");
		scanf("%f", & numero_1);
	printf("Digite outro numero: ");
		scanf("%f", & numero_2);
	
	if(numero_1 > numero_2){
		printf("Maior numero: %0.2f \n", numero_1);
		printf("Menor numero: %0.2f \n", numero_2);
	}else{
		printf("Maior numero: %0.2f \n", numero_2);
		printf("Menor numero: %0.2f \n", numero_1);
	}
	
	system("pause");
}
