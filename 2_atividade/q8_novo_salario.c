/*6. Leia o sal�rio de funcion�rios de uma empresa, calcule e escreva o novo sal�rio (segundo os
crit�rios descritos abaixo), a soma dos sal�rios atuais, a soma dos sal�rios reajustados e a
diferen�a entre as 2 somas. (Flag: sal�rio=0)*/
//ainda n�o terminei
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main(){
	float salario, salario_novo;
	float soma_salario, soma_salario_novo, diferenca;
	
	do{
		printf("Salario: ");
		scanf("%f",& salario);
		soma_salario = soma_salario + salario;
		if(salario > 0 && salario <= 2999.99){
			salario_novo = (salario * 0.25) + salario;
			printf("Novo salario: %0.2f\n", salario_novo);
			soma_salario_novo = soma_salario_novo + salario_novo;
			
		}else if(salario > 2999.99 && salario <= 5999.99){
			salario_novo = (salario * 0.20) + salario;
			printf("Novo salario: %0.2f\n", salario_novo);
			soma_salario_novo = soma_salario_novo + salario_novo;
			
		}else if(salario > 5999.99 && salario <= 9999.99){
			salario_novo = (salario * 0.15) + salario;
			printf("Novo salario: %0.2f\n", salario_novo);
			soma_salario_novo = soma_salario_novo + salario_novo;
			
		}else if(salario > 9999.99){
			salario_novo = (salario * 0.10) + salario;
			printf("Novo salario: %0.2f\n", salario_novo);
			soma_salario_novo = soma_salario_novo + salario_novo;
		}
	}while(salario != 0);
	printf("__________________________________\n");
	printf("soma dos salario: %0.2f\n", soma_salario);
	printf("soma dos salarios reajustados: %0.2f\n", soma_salario_novo);
	diferenca = soma_salario_novo - soma_salario;
	printf("Custo de reajuste: %0.2f\n", diferenca);
	printf("__________________________________\n");
	
}
