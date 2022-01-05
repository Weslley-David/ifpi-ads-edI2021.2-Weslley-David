/*11. Leia dois nomes e compare se os nomes são iguais. Se forem iguais imprima “São Iguais!”, senão
imprima “São Diferentes”.*/
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
