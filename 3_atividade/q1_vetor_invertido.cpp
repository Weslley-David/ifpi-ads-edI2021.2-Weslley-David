/*1. Leia um vetor A com N elementos e escreva um vetor B, com os mesmos elementos de A,
sendo que estes deverão estar invertidos, ou seja, o 1o elemento de A deve ser o último
elemento de B; o 2o elemento de A deve ser o penúltimo elemento de B e assim por diante.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, i, j;
	printf("quantos elementos deseja inserir? ");
	scanf("%d",& n);
	//declarando espaco do vetor
	int a[n];
	int b[n];
	
	//inserindo valores
	for(i = 0; i < n; i++){
		printf("Elemento %d: ", i + 1);
			scanf("%d",& a[i]);
			b[n - 1 -i] = a[i];
	}
	printf("===================\n");
	
	//mostrando vetor resultante
	for(i = 0; i < n; i++){
		printf("Elemento %d: %d \n", i + 1,b[i]);
	}
}
