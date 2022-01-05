//5. Leia uma velocidade em km/h, calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6)
#include<stdio.h>
#include<stdlib.h>
main(){
	float vel_ms, vel_kmh;
	printf("digite a velocidade em km/h : ");
		scanf("%f", & vel_kmh);
	vel_ms = (vel_kmh/3.6);
	printf("velocidade em km/h: %0.2f \n", vel_ms);
	
	system("pause");
}
