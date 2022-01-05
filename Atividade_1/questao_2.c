//2. Leia um valor em horas e um valor em minutos, calcule e escreva o equivalente em minutos.
#include<stdio.h>
#include<stdlib.h>
main(){
	int hora, minuto, minuto_resultado;
	printf("digite a hora    : ");
		scanf("%d", & hora);
	printf("digite os minutos: ");
		scanf("%d", & minuto);
	
	minuto_resultado = minuto + (hora * 60);
	printf("Quantidade total em minutos: %d \n", minuto_resultado);
	
	system("pause");
}
