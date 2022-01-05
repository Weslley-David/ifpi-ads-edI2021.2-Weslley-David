/*4. Leia dois números X e N. A seguir, escreva o resultado das divisões de X por N onde, após
cada divisão, X passa a ter como conteúdo o resultado da divisão anterior e N é decrementado
de 1 em 1, até chegar a 2.*/
#include<stdlib.h>
#include<stdio.h>
main(){
	float x, n;
	printf("X: ");
	scanf("%f",& x);
	printf("N: ");
	scanf("%f",& n);
	
	while(n >= 2){
		printf("%0.2f", x);
		x = x/n;
		printf(" / %0.2f = %0.2f\n", n, x);
		n--;
	}
	
	
}
