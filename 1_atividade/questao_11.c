/*11. Leia dois valores e uma das seguintes opera��es a serem executadas (codificadas da seguinte forma: 1 �
Adi��o, 2 � Subtra��o, 3 � Multiplica��o e 4 � Divis�o). Calcule e escreva o resultado dessa opera��o
sobre os dois valores lidos.*/
#include<stdio.h>
#include<stdlib.h>
main(){
	float numero_1, numero_2, resultado;
	int opcao;
	printf("Numero 1: ");
		scanf("%f", & numero_1);
	printf("Numero 2: ");
		scanf("%f", & numero_2);
	
	printf("Op��es=================\n");	
	printf("=======================\n");
	printf("1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
	printf("=======================\n");
	printf("indique o numero correspondente a opcao que deseja: ");
	scanf("%d", & opcao);
	if(opcao == 1){
		resultado = numero_1 + numero_2;
	}else if(opcao == 2){
		resultado = numero_1 - numero_2;
	}else if(opcao == 3){
		resultado = numero_1 * numero_2;
	}else if(opcao == 4){
		resultado = numero_1/numero_2;
	}else{
		printf("Opcao invalida.\n");
		return 0;
	}
	printf("Resultado: %0.2f", resultado);
}
