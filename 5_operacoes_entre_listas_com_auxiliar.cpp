#include<stdio.h>
#include<stdlib.h>
#include "auxiliar.h"
//uso de auxiliar e operações com lista
int main(){
	Lista l;
	l = inclue(5, NULL);
	l = inclue(3, l);
	l = inclue(7, l);
	
	exibe(l);
	printf("=======\n");
	ocorrencia(7,l);
	printf("=======\n");
	ultimo_elemento(l);
	printf("=======\n");
	inversa(l);
	system("pause");
	return 0;
}
