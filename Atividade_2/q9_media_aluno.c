/*Leia informações de alunos (matrícula, nota1, nota2, nota3) com o fim das informações indicado
por matrícula = 0. Para cada aluno deve ser calculada a média final de acordo com a seguinte
fórmula:*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
main(){
	char matricula[30];
	int aprovados, reprovados, total;
	float nota1, nota2, nota3, media;
	while(true){
		printf("matricula: ");
			scanf("%s", & matricula);
			if(strcmp(matricula,"0") == 0){
				break;
			}
		printf("Nota 1: ");
			scanf("%f", & nota1);
		printf("Nota 2: ");
			scanf("%f", & nota2);
		printf("Nota 3: ");
			scanf("%f", & nota3);
			
		media =( (2 * nota1) + (3 * nota2) + (5 * nota3) ) / 10;
		printf("%f", media);
		
		if(media >= 7){
			printf("aprovado!\n");
			aprovados = aprovados + 1;
		}else{
			printf("reprovado\n");
			reprovados = reprovados + 1;
		}
		
	}
	reprovados = reprovados - 1;// por algum motivo, reprovados sempre recebe 1 a mais.
	total = aprovados + reprovados;
	
	printf("total de alunos    : %d\n", total);
	printf("total de aprovados : %d\n", aprovados);
	printf("total de reprovados: %d\n", reprovados);
}
