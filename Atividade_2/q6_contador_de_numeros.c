/*5. Escreva um programa para determinar o número de dígitos de um número informado.*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main(){
	char numero[50];
	int tamanho;
	
	printf("Numero: ");
	scanf("%s",& numero);
	tamanho = strlen(numero);
	printf("Quantidade de algarismos: %d", tamanho);
}
