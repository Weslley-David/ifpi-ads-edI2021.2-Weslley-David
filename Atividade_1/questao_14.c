//14. Leia uma letra e verifique se letra � "F" e escreva �F � Feminino� ou �M� e escreva �M � Masculino�, se n�o for nem F ou M, escreva �Sexo Inv�lido�.
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
