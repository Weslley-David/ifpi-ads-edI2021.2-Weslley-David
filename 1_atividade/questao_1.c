//1. Leia uma velocidade em m/s, calcule e escreva esta velocidade em km/h. (Vkm/h = Vm/s * 3.6)
#include<stdio.h>
#include<stdlib.h>
main(){
	float vel_ms, vel_kmh;
	printf("digite a velocidade em m/s : ");
		scanf("%f", & vel_ms);
	vel_kmh = (vel_ms * 3.6);
	printf("velocidade em km/h: %0.2f \n", vel_kmh);
	
	system("pause");
}
