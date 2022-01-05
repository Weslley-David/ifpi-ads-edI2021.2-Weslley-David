#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define fmt "%d"
using namespace std;
typedef int Item;
typedef struct no {
	Item item;
	struct no *prox;	
}*Lista; 



Lista inclue(Item x, Lista p){
	Lista n = (Lista)malloc(sizeof(Lista));
	n->item = x;
	n->prox = p;
	return n;
}

void exibe(Lista L){
	while (L!=NULL){
		cout<<L->item<<endl;
		L=L->prox;
	}
	cout<<"---------------------"<<endl;
	
}


//versao passando o parametro Lista A diretamente 
void anexa1(Lista A, Lista B){
	if (B==NULL) return;
	while (A->prox!=NULL) 	    
	    A=A->prox;
	A->prox=B;
}

// a versao do livro est� assim: passando o parametro Lista INdiremente (endere�o para endere�o) 
void anexa0(Lista *A, Lista B){
	if (B==NULL) return;
	while (*A!=NULL) 
	    A = &(*A)->prox;	    
	*A=B;
}


// a versao do livro est� assim: passando o parametro Lista INdiremente (endere�o para endere�o) 
void destroi(Lista *L){	
    exibe(*L);
	while (*L !=NULL){
		Lista n = *L;
		*L = n->prox;
		free(n);
		exibe(*L);		
	}    
}

//versao passando o parametro Lista L diretamente 
void destroi1(Lista L){
	exibe(L);
	while (L!=NULL){
		Lista n = L;
		L = n->prox;
		free(n);
		exibe(L);
	}    
}

int tam(Lista L){
	if(L==NULL) return 0;
	return 1 + tam(L->prox);
}

int pert(Item x, Lista L){
	if(L == NULL) return 0;
	if(x == L->item) return 1;
	return pert(x, L->prox);
}
//
Lista clone(Lista L){
	if(L == NULL) return NULL;
	//return no(L->item,clone(L->prox));
	
}

void exibe_inv(Lista L){
	if(L == NULL) return;
	exibe_inv(L->prox);
	printf(fmt, L->item);
}

/*
5) Verique a diferen�a entre os m�todos "void anexa1(Lista A, Lista B)" e "void anexa0(Lista *A, Lista B)":

    
 5.1. Veja como os valores s�o passados aos par�metros quando os m�todos s�o chamados. � da mesma maneira? � de forma diferente?
 	S�o passados de forma diferente, em anexa1, os valores s�o passados por valor, e em anexa0 um dos valores � passado por refer�ncia. 

 5.2. Os m�todos "void anexa1(Lista A, Lista B)" e "void anexa0(Lista *A, Lista B)"   ir�o realizar a mesma opera��o com sucesso? Justifique sua resposta.
 	Sim, em ambos os casos a Lista � anexada a lista correspondente.
 
*/

/*
6) Verique a diferen�a entre os m�todos "void destroi(Lista *L)" e "void destroi1(Lista L)":
    
 6.1. Veja como os valores s�o passados aos par�metros quando os m�todos s�o chamados. � da mesma maneira? � de forma diferente?
	S�o passados de forma diferente, em destroi1, o par�metro � passado por valor, e em destroi o valor � passado por refer�ncia. 
	
 6.2. Os m�todos "void destroi(Lista *L)" e "void destroi1(Lista L)  " ir�o realizar a mesma opera��o com sucesso? Justifique sua resposta.
 	N�o, na segunda, como o par�metro � por valor, inpossibilita-se a exclus�o da lista.
*/

main(){	
	Lista H = inclue(4,inclue(2,NULL));
	exibe(H);
	Lista I = inclue(3,inclue(1,inclue(5,NULL)));
	exibe(I);
	anexa0(&H,I);  // observe que aqui ele passa o endereco do endereco (&H)
	exibe(H);
	cout<< tam(H) <<endl;
	//cout<< pert(9, H)<< endl;
	//exibe_inv(H);
	//destroi1(I);
	//exibe(H);
	cout << pert(1,I) << endl;
}
	
/*main(){	

	Lista L = inclue(40,inclue(20,NULL));
	exibe(L);
	Lista M = inclue(30,inclue(10,inclue(50,NULL)));
	exibe(M);
	anexa1(L,M);  //observe que aqui ele passa o endere�o L diretamente
	exibe(L);
	destroi(&L);
    destroi1(L);	
}*/

