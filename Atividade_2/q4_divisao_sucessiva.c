/*4. Leia um n�mero e divida-o por dois (sucessivamente) at� que o resultado seja menor que 1.
Escreva o resultado da �ltima divis�o efetuada.*/
#include<stdlib.h>
#include<stdio.h>
main(){
	float num;
	printf("numero: ");
	scanf("%f",& num);
	
	while(num >= 1){
		num = num/2;
	}
	printf("Resultado da ultima divisao: %0.2f", num);
	
}
