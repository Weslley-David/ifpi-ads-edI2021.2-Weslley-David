/*8. Emita o resultado de uma pesquisa de opinião pública a respeito das eleições presidenciais. O
entrevistado deverá escolher entre 3 candidatos (Serra=45, Dilma=13 ou Ciro Gomes=23), ou
então responder: indeciso=99, outros=98, nulo/branco=0. O programa deve ler a opinião de voto
de cada entrevistado, encerrando-se a pesquisa com a opinião sendo igual a –1. Ao final, devem
ser mostrados:*/
#include<stdlib.h>
#include<stdio.h>
main(){
	int intencao;
	float serra, dilma, ciro, indeciso, outros, nulo, total;
	float unit_total_percent;
		printf("Serra   : 45 |\n");
		printf("Dilma   : 13 |\n");
		printf("Ciro    : 23 |\n");
		printf("indeciso: 99 |\n");
		printf("outros  : 98 |\n");
		printf("nulo    : 0  |\n");
		printf("_____________|\n\n");
	while(intencao != -1){
		printf("Escolha sua intencao de voto: ");
		scanf("%d",& intencao);
		if(intencao == 45){
			serra = serra + 1;
			
		}else if(intencao == 13){
			dilma = dilma + 1;
			
		}else if(intencao == 23){
			ciro = ciro + 1;
			
		}else if(intencao == 99){
			indeciso = indeciso + 1;
			
		}else if(intencao == 98){
			outros = outros + 1;
			
		}else if(intencao == 0){
			nulo = nulo + 1;
			
		}
		
	}
	//calculo 1%
	total = serra + dilma + ciro + indeciso + outros + nulo;
	unit_total_percent = 100/ total;
	
	//corrigindo de unidades para porcentagem
	serra = serra * unit_total_percent;
	dilma = dilma * unit_total_percent;
	ciro = ciro * unit_total_percent;
	indeciso = indeciso * unit_total_percent;
	outros = outros * unit_total_percent;
	nulo = nulo * unit_total_percent;
	
	printf("total de entrevistados >>> %0.0f\n", total);
	printf("Serra................: %0.2f%\n", serra);
	printf("Dilma................: %0.2f%\n", dilma);
	printf("Ciro.................: %0.2f%\n", ciro);
	printf("Indecisos............: %0.2f%\n", indeciso);
	printf("Outros...............: %0.2f%\n", outros);
	printf("Nulo.................: %0.2f%\n", nulo);
	if((serra < 50) && (dilma < 50) && (ciro < 50) && (outros < 50)){
		printf("POSIVEL SEGUNDO TURNO.");
	}else{
		printf("SEM SEGUNDO TURNO.");
	}
	
}
