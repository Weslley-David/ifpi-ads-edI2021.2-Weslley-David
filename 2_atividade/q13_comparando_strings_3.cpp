/*11. Leia dois nomes e compare se os nomes s�o iguais. Se forem iguais imprima �S�o Iguais!�, sen�o
imprima �S�o Diferentes�.*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

main(){
	string nome1, nome2;
	printf("Nome 1: ");
		cin >> nome1;
	printf("Nome 2: ");
		cin >> nome2;
	
	if(nome1 == nome2){
		printf("Sao Iguais!");
	}else{
		printf("Sao Diferentes!");
	}
}
