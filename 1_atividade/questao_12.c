//12. Leia 2 datas (cada data é composta por 3 variáveis inteiras: dia, mês e ano) e escreva qual delas é a mais recente.
#include<stdio.h>
#include<stdlib.h>
main(){
	int dia, mes, ano;
	int dia_2, mes_2, ano_2;
	printf("DATA 1>>>\n");
	printf("Dia: ");
		scanf("%d",& dia);
	printf("Mes: ");
		scanf("%d",& mes);
	printf("Ano: ");
		scanf("%d",& ano);
	
	printf("-----------------------\n");
	
	printf("DATA 2>>>\n");
	printf("Dia: ");
		scanf("%d",& dia_2);
	printf("Mes: ");
		scanf("%d",& mes_2);
	printf("Ano: ");
		scanf("%d",& ano_2);
	

	//compara ano
	if(ano > ano_2){
		printf("DATA 1 MAIS RECENTE.");
	}else if(ano < ano_2){
		printf("DATA 2 MAIS RECENTE.");
	}else{
		//compara mes
		if(mes > mes_2){
			printf("DATA 1 MAIS RECENTE.");
		}else if(mes < mes_2){
			printf("DATA 2 MAIS RECENTE.");
		}else{
			//compara dia
			if(dia > dia_2){
				printf("DATA 1 MAIS RECENTE.");
			}else if(dia < dia_2){
				printf("DATA 2 MAIS RECENTE.");
			}else{
				printf("AS DATAS SAO IGUAIS.");
			}
		}
	}
}
