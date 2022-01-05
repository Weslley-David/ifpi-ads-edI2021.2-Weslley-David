#include<stdio.h>
#include<iostream>
using namespace std;
void Quick(int vetor[12], int inicio, int fim);
void PesquisaBinaria(int n, int *v, int procurado);
int main(){
	
   int vetor[12] = {1, 4,3, 9,10,50,13,20,25,67,87,100};
   //ordene o vetor usando o quicksort
   Quick(vetor, 0, 11);
   //mostre o vetor ordenado
   for(int i = 0; i <= 11; i++){
		printf("%d\n", vetor[i]);
   }
   //pesquise no vetor usando o metodo de pesquisa binaria
   PesquisaBinaria(11, vetor, 25);
  
}

void Quick(int vetor[12], int inicio, int fim){
   		int pivo, aux, i, j, meio;
	 	i = inicio;
	 	j = fim;
	 	meio = (int)((i + j) / 2);
	 	pivo = vetor[meio];
	 	do{
	 		while(vetor[i] < pivo) i = i + 1;
	 		while(vetor[j] > pivo) j = j - 1;
	 		if(i <= j){
	 			aux = vetor[i];
	 			vetor[i] = vetor[j];
	 			vetor[j] = aux;
	 			i = i + 1;
	 			j = j - 1;
			 }
		 }while(j > i);
		 if(inicio < j){
		 	Quick(vetor, inicio, j);
		 }
		 if(i < fim){
		 	Quick(vetor, i, fim);
		 }
    }  


void PesquisaBinaria(int n, int *v, int procurado){
	int ini = 0;
	int fim = n-1;
	int achou = 0;
	while(ini <= fim){
		int meio = (ini + fim)/2;
		if(procurado < v[meio])
			fim = meio -1;
		else if(procurado > v[meio])
			ini = meio + 1;
		else{
			printf("%d\n",meio);
			achou = 1;
			break;
		}
		
	}
	if(achou == 0)
		printf("nao encontrado\n");
	
}

