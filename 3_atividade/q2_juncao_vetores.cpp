/*2. Leia 2 vetores A e B com N elementos, escreva um vetor C, sendo este a junção dos vetores
A e B. Desta forma, a vetor C deverá ter 2*N elementos.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, i, i2;
	
	printf("quantos elementos deseja inserir? ");
	scanf("%d",& n);
	
	int a[n];
	int b[n];
	int c[n*2];
	//Coletando valores
	for(i = 0; i < n; i++){
		printf("Elemento a[%d]: ", i);
			scanf("%d",& a[i]);
	}
	
	for(i = 0; i < n; i++){
		printf("Elemento b[%d]: ", i);
			scanf("%d",& b[i]);
	}
	//adicionando vetor a para c
	for(i = 0; i < n; i++){
		c[i] = a[i];
	}
	//adicionando vetor b para c
	i2 = 0;
	for(i = n; i < n * 2; i++){
		c[i] = b[i2];
		i2++;
	}
	printf("===================\n");
	printf("Vetor C.===========\n");
	//mostrando vetor c
	for(i = 0; i < n * 2; i++){
		printf("posicao %d : %d\n", i, c[i]);
	}
	
}
