/*3. Leia 2 (dois) n�meros, calcule e escreva o mdc (m�ximo divisor comum) entre os n�meros lidos.*/
#include<stdlib.h>
#include<stdio.h>
main(){
	int num, num_2, mdc = 1, n = 2, teto;
	printf("numero 1: ");
	scanf("%d",& num);
	printf("numero 2: ");
	scanf("%d",& num_2);
	//definindo um teto para teste
	if(num > num_2){
		teto = num;
	}else{
		teto = num_2;
	}
	
	//mdc
	while(num != 1 && num_2 != 1){
		while(n < teto){
			if(num % n == 0 && num_2 % n == 0){
				mdc = mdc * n;
				num = num/n;
				num_2 = num_2/n;
				break;
			}else if(num % n == 0){
				num = num/n;
				break;
			}else if(num_2 % n == 0){
				num_2 = num_2/n;
				break;
			}
			n++;
		}
	}
	printf("MDC: %d", mdc);
	
}
