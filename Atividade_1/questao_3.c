//3. Leia o valor do d�lar e um valor em d�lar, calcule e escreva o equivalente em real (R$).
#include<stdio.h>
#include<stdlib.h>
main(){
	float cota_dolar, valor_dolar, real;
	printf("Indique a cotacao do dolar: ");
		scanf("%f", & cota_dolar);
	printf("Indique um valor em dolar : ");
		scanf("%f", & valor_dolar);
	real = cota_dolar * valor_dolar;
	printf("Equivalente em real: %0.2f \n", real);
	
	system("pause");
}
