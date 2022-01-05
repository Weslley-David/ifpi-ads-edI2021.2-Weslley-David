/*1. Leia uma lista de números e que para cada número lido, escreva o próprio número e a relação
de seus divisores. (flag número = 0).*/
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
main(){
	int num, i = 1;
	bool loop = true;
	while(loop){
		printf("Numero: ");	
		scanf("%d",&num);
		if(num == 0){
			break;
		}else{
			printf("Divisores de %d >>>\n", num);
			while(i <= num){
				if(num%i == 0){
					printf("%d divisivel por %d\n",num ,i);
				}
				i++;
			}
			printf("\n");
			i = 1;
		}
	}
}
