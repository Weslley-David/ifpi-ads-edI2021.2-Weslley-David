/*11. Leia dois nomes e compare se os nomes são iguais. Se forem iguais imprima “São Iguais!”, senão
imprima “São Diferentes”.*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

main(){
	char nome1[20], nome2[20];
	printf("Nome 1: ");
		scanf("%s",nome1);
	printf("Nome 2: ");
		scanf("%s",nome2);
		
	if(strcmp(nome1, nome2) == 0){
		printf("Sao Iguais!");
	}else{
		printf("Sao Diferentes!");
	}
}
