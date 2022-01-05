//4. Leia um número inteiro (3 dígitos), calcule e escreva a soma de seus elementos (C + D + U).
#include<stdio.h>
#include<stdlib.h>
main(){
	int u, d, c, resultado;
	printf("Indique os elementos do numero respectivamente>>>\n");
	printf("Unidade: ");
		scanf("%d", & u);
	printf("Dezena : ");
		scanf("%d", & d);
	printf("Centena: ");
		scanf("%d", & c);
	resultado = u + d + c;
	printf("soma dos elementos: %d\n", resultado);
	system("pause");
}
