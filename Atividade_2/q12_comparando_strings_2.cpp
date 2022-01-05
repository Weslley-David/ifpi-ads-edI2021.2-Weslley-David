/*10. Leia dois nomes e compare se os nomes são iguais. Se forem iguais imprima “São Iguais!”, senão
imprima “São Diferentes”.*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
main(){
	char nome1[20], nome2[20];
	int status, i;
	
	printf("Nome 1: ");
		scanf("%s",nome1);
	printf("Nome 2: ");
		scanf("%s",nome2);
	
	
	for(i = 0; i < 20; i++){
		if(nome1[i] == '\0' && nome2[i] == '\0'){
			break;
		}
		if(nome1[i] != nome2[i]){
			status++;
		}
	}
		
	if(status == 0){
		printf("Sao Iguais!");
	}else{
		printf("Sao Diferentes!");
	}
}
