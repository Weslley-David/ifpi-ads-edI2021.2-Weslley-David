#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define fmt "%d"
using namespace std;
typedef int Item;
typedef struct no{
	Item item;
	struct no *prox;
} *Lista;
Lista inclue(Item x, Lista p){
	Lista n = (Lista)malloc(sizeof(Lista));
	n->item = x;
	n->prox = p;
	return n;
}
void exibe(Lista L){
	while(L != NULL){
		cout<<L -> item<<endl;
		L=L->prox;
	}
}
void anexa(Lista *A, Lista B){
	if(B==NULL) return;
	while(*A != NULL){
		A = &(*A)->prox;
	}
	*A = B;
}
void ocorrencia( int x, Lista L){
	int i = 0;
	while(L != NULL){
		if(L -> item == x){
			i++;
		}
		L=L->prox;
	}
	cout << i <<endl;
}

void ultimo_elemento(Lista L){
	while(L != NULL){
		if(L->prox == NULL){
			cout<<L -> item<<endl;
		}
		L=L->prox;
	}
}
void inversa(Lista L){
	if(L==NULL) return;
	inversa(L->prox);
	cout<< L-> item<<endl;
}
#endif
