/*3. Leia 2 vetores A e B com N elementos, escreva o conjunto união entre os vetores A e B; e o
conjunto interseção entre os vetores A e B.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, n2, i, j;
	//conjunto 1
	printf("quantos elementos deseja inserir no conjunto 1? ");
	scanf("%d",& n);
	
	int conjunto_1[n];
	
	for(i = 0; i < n; i++){
		printf("Elemento do conjunto 1[%d]: ", i);
			scanf("%d",& conjunto_1[i]);
	}
	//conjunto 2
	
	printf("quantos elementos deseja inserir no conjunto 2? ");
	scanf("%d",& n2);
	
	int conjunto_2[n2];
	
	for(i = 0; i < n2; i++){
		printf("Elemento do conjunto 1[%d]: ", i);
			scanf("%d",& conjunto_2[i]);
			
	}
	
	//intersecção
	printf("===================\n");
	printf("Interseccao: ======\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n2; j++){
			if(conjunto_1[i] == conjunto_2[j]){
				printf("%d\n", conjunto_1[i]);
			}
			
		}
	}
}
