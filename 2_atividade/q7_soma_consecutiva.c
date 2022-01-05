/*7. Leia um numero X e, a seguir, leia e escreva uma lista de números com o término da lista
ocorrendo quando a soma de dois números consecutivos da lista for igual a X.*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main(){
	int x, a = 0, b = 0;
	
	printf("Numero: ");
	scanf("%d",& x);
	while(a + b != x){
		printf("%d\n", a);
		a++;
		b = a - 1;
	}
}
