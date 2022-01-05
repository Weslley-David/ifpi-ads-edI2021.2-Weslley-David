/*6. Gere um vetor com os N primeiros termos da seqüência de Fibonacci (0,1,1,2,3,5,8,13,21,...).*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, i;
	int f1 = 0, f2 = 1, resultado;
	
	printf("Quantos elementos da sequencia deseja ver? ");
	scanf("%d",& n);
	switch(n){
		case 0:
			return 0;
		break;
		
		case 1:
			printf("0\n");
			return 0;
		break;
	}
	n = n - 2;
    f1 = 0;
    f2 = 1;
    printf("0\n");
    printf("1\n");
	    for(i = 0; i < n; i++){
	        resultado = f1 + f2;
	        printf("%d \n",resultado);
	        f1 = f2;
	        f2 = resultado;
	    }
	}
