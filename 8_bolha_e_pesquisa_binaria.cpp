#include <stdio.h>
#include <stdlib.h>

void bolha (int n,int* v) {
	int i,j;
	int troca;
		for(i = n - 1; i>=1; i--){
			troca = 0;
			for(j = 0; j<i; j++){
				if(v[j]> v[j+1]){
					int temp = v[j];
					v[j] = v[j+1];
					v[j+1] = temp;
					troca = 1;
				}
			}
			if(troca == 0){
				break;
			}
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
	 
main(){
	int v[4];
	for(int i=0;i<=3;i=i+1){
		printf("Digite o valor %d :",i);
		scanf("%d",&v[i]);
	}
		
	//ordene o vetor V usando o método da bolha
	bolha(4, v);
	
	//mostre o vetor ordenado
	for(int i=0;i<=3;i++){
		printf("Valor: %d\n",v[i]);
	}
    
	//pesquise no vetor usando o metodo de pesquisa binaria
	PesquisaBinaria(4, v, 3);
	}
