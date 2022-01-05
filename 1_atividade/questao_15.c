//15. Leia uma letra e verifique se a letra digitada é vogal ou consoante.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char letra;
	int letra_ascii;
	printf("Digite uma letra: ");
	scanf("%c",& letra);
	if((letra == 'a' || letra == 'A') || (letra == 'e' || letra == 'E') || (letra == 'i' || letra == 'I') || (letra == 'o' || letra == 'O') || (letra == 'u' || letra == 'U')){
		printf("Vogal");
	}else{
		printf("Consoante");
	}
}
