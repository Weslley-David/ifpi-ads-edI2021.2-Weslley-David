/*4. Leia dois n�meros X e N. A seguir, escreva o resultado das divis�es de X por N onde, ap�s
cada divis�o, X passa a ter como conte�do o resultado da divis�o anterior e N � decrementado
de 1 em 1, at� chegar a 2.*/
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
