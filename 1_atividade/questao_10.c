/*10. Leia duas notas de um aluno e escreva na tela a palavra �Aprovado� se a m�dia das duas notas for maior
ou igual a 7,0. Caso a m�dia seja inferior a 7,0, escreva �O Aluno deve fazer a prova final!� e o
programa deve ler a nota da prova final e calcule a m�dia final. Se a m�dia final for maior ou igual a
6,0, o programa deve escrever �Aprovado!�, caso contr�rio deve escrever �Reprovado!�.*/
#include<stdio.h>
#include<stdlib.h>
main(){
	float nota_1, nota_2, nota_final, media;
	printf("Nota 1: ");
		scanf("%f", & nota_1);
	printf("Nota 2: ");
		scanf("%f", & nota_2);
		media = (nota_1 + nota_2)/2;
		if(media >=7){
			printf("Aprovado.");
		}else{
			printf("O Aluno deve fazer a prova final!\n");
			printf("Prova final: ");
			scanf("%f", & nota_final);
			media = (nota_final + nota_1 + nota_2)/3;
			if(media >=6){
				printf("Aprovado!");
			}else{
				printf("Reprovado!");
			}
		}
	
}
