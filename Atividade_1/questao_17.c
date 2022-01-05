/*17. Leia o turno em que um aluno estuda, sendo M para matutino, V para Vespertino ou N para Noturno 
e escreva a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.*/
#include<stdio.h>
#include<stdlib.h>
main(){
	char turno;
	printf("M para matutino\nV para Vespertino\nN para Noturno\n===================\n");
	printf("Digite seu Turno: ");
	scanf("%c",& turno);
	if(turno == 'M' || turno == 'm'){
		printf("Bom dia!");
	}else if(turno == 'V' || turno == 'v'){
		printf("Boa Tarde!");
	}else if(turno == 'N' || turno == 'n'){
		printf("Bom noite!");
	}else{
		printf("TURNO INVALIDO!");
	}
}
