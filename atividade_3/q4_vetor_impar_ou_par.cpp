/*4. leia um vetor A com N elementos e escreva um vetor B com N elementos, conforme a
seguinte condi��o: se �ndice de A[�ndice] � par ent�o B[�ndice] = 0, caso contr�rio B[�ndice]
= 1.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, i;
	
	printf("Quantos elementos deseja inserir? ");
	scanf("%d",& n);
	
	int a[n];
	int b[n];
	for(i = 0; i < n; i++){
		printf("Elemento a[%d]: ", i);
			scanf("%d",& a[i]);
	}
	for(i = 0; i < n; i++){
		if(a[i]%2 == 0){
			b[i] = 0;
		}else{
			b[i] = 1;
		}
	}
	for(i = 0; i < n; i++){
		printf("posicao %d : %d\n", i, b[i]);
	}
}
