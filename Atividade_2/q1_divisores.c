/*1. Leia uma lista de n�meros e que para cada n�mero lido, escreva o pr�prio n�mero e a rela��o
de seus divisores. (flag n�mero = 0).*/
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
