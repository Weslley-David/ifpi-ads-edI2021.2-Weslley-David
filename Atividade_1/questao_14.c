//14. Leia uma letra e verifique se letra é "F" e escreva “F – Feminino” ou “M” e escreva “M – Masculino”, se não for nem F ou M, escreva “Sexo Inválido”.
#include<stdio.h>
#include<stdlib.h>
main(){
	char sexo;
	printf("Digite seu sexo: ");
	scanf("%c",& sexo);
	if(sexo == 'f' || sexo == 'F'){
		printf("F - Feminino");
	}else if(sexo == 'm' || sexo == 'M'){
		printf("M - Masculino");
	}else{
		printf("SEXO INVALIDO");
	}
}
