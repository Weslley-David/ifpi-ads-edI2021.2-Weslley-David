#include <stdio.h>
#include <iostream>
using namespace std;

int myarray[]={10,5,6,1,3};

//Defina o algoritmo de ordenação por inserção
 //mostre o vetor ordenado

void ord_insercao(int v[],int tam){
	int j, i, temp;
		for(i = 1; i < tam; i++){
			temp = v[i];
			j = i - 1;
			while(v[j] > temp && j >= 0){
				v[j+1] = v[j];
				j--;
			}
			v[j+1] = temp;
		} 
} 

//chame o algoritmo ord_insercao ordenando o vetor myarray
main(){
	ord_insercao(myarray, 5);
	for(int i = 0; i <= 4; i++){
		printf("%d \n",myarray[i]);
	}
	
}

