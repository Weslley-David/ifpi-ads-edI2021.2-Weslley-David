/*5. Leia um vetor com N elementos, encontre e escreva o maior e o menor elemento e suas
respectivas posições no vetor.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, i, maior, menor;
	
	printf("Quantos elementos deseja inserir? ");
	scanf("%d",& n);
	
	int a[n];
	for(i = 0; i < n; i++){
		printf("Elemento [%d]: ", i);
			scanf("%d",& a[i]);
	}
	//maior elemento
	maior = a[0];
	for(i = 0; i < n; i++){
		if(maior < a[i]){
			maior = a[i];
		}
	}
	//maior elemento
	menor = a[0];
	for(i = 0; i < n; i++){
		if(menor > a[i]){
			menor = a[i];
		}
	}
	printf("Maior termo: %d\n", maior);
	printf("Menor termo: %d\n", menor);
}
