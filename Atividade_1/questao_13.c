//13. Leia um número e mostre na tela se o número é positivo ou negativo.
#include<stdio.h>
#include<stdlib.h>
main(){
	float numero;
	printf("Digite um numero: \n");
	scanf("%f",& numero);
	if(numero < 0){
		printf("%0.2f eh negativo.", numero);
	}else{
		printf("%0.1f eh positivo.", numero);// %0.0f arredonda o número para o decimal inteiro mais próximo no caso de decimal
	}
}
