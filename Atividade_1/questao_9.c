//9. Leia uma data (dia, mês e ano), verifique e escreva se a data é ou não válida.
#include<stdio.h>
#include<stdlib.h>
main(){
	int dia, mes, ano;
	
	printf("Indique um dia: ");
		scanf("%d", & dia);
	printf("Indique um mes: ");
		scanf("%d", & mes);
	printf("Indique um ano: ");
		scanf("%d", & ano);
		
	if(dia > 0 && dia <= 31){
		printf("Dia valido.\n");
	}else{
		printf("Dia invalido.\n");
		printf("====================");
		printf(" DATA INVALIDA.");
		return 0;
	}
	if(mes > 0 && mes <= 12){
		printf("Mes valido.\n");
	}else{
		printf("Mes invalido.\n");
		printf("====================");
		printf(" DATA INVALIDA.");
		return 0;
	}
	if(ano != 0){
		printf("Ano valido.\n");
	}else{
		printf("Ano invalido.\n");
		printf("====================");
		printf(" DATA INVALIDA.");
		return 0;
	}
	printf("====================");
	printf("DATA VALIDA.");
}
