#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//lista DUPLAMENTE ENCADEADA - ELEMENTO NO COM 2 PONTEIROS, UM PARA O ELEMENTO ANTERIOR E OUTRO PARA O PROX ELEMENTO
class No{
	public:
		int mat;
		char nome[23];
		No *prox;
		No *ant;
		No(int m,char n[23]){
			mat=m;
			strcpy(nome,n);
			prox=NULL;
			ant=NULL;
		}
};


class Lista{
	public:
		No *inicio;
		No *fim;
	
		//construtor
	    Lista(){
	    	inicio = NULL;
	    	fim = NULL;
		}	
		
		//adiciona no final da lista
		void addToFinal(int m, char n[23]){
			No *novo= new No(m,n);
			if (fim==NULL){
				inicio = novo;
				fim = novo;
			}
			else{
				fim->prox=novo;
				novo->ant=fim;
				fim=novo;
			}
		}
		
		//adiciona no inicio da lista
		void addToIni(int m, char n[23]){
			No *novo = new No(m,n);
			if (fim == NULL){
				inicio = novo;
				fim = novo;
			}
			else{
				novo -> prox = inicio;
				inicio -> ant = novo;
				inicio = novo;
			}
		}
		
		//adiciona o elemento na lista ordenada
		void addOrd(int m, char n[23]){
			No *novo = new No(m,n);
			if (fim==NULL){
				inicio = novo;
				fim = novo;
			}else{
				if(novo->mat < inicio->mat){
					novo -> prox = inicio;
					inicio -> ant = novo;
					inicio = novo;
				}else if(novo->mat > fim->mat){
					fim->prox=novo;
					novo->ant=fim;
					fim=novo;
				}else{
					No *item = inicio;
					while(item != NULL ){
						if(novo->mat < item->mat){
							//No *anterior = inicio->ant;
							//anterior //novo //inicio;
							novo->ant = item->ant;
							item->ant = novo;
							novo->ant->prox = novo;
							novo->prox = item;
							break;
						}
						item = item -> prox;
				}
				}
			}
			
		}
		
		// mostrar os elementos do inicio ao final da lista
		bool lst_vazia(){
			return (inicio==NULL);
		}
		
		void mostraIniFim(){
			if (lst_vazia()){
				cout<<"\nLista vazia!!!";
			}
			else{
				No *item = inicio;
				while(item != NULL ){
					cout<<item->mat<< " " << item->nome <<endl;
					item = item -> prox;
				}
			}	
		}
		
		//mostrar os elementos do final ao inicio da lista
		void mostraFimIni(){
			if (lst_vazia()){
				cout<<"\nLista vazia!!!";
			}
			else{
				No *item = fim;
				while(item != NULL ){
					cout<<item->mat<< " " << item->nome <<endl;
					item = item -> ant;
				}
			}		
		}
		
		//remove o elemento do final da lista
		int removerFinal(){
			No *atual = fim;
			fim = fim->ant;
			fim -> prox = NULL;
			free(atual);
		}
		
		//remove o elemento do inicio da lista
		int removerInicio(){
			No *atual = inicio;
			inicio = inicio -> prox;
			inicio->ant = NULL;
			free(atual);
		}
		
		//remove o elemento procurado , o valor procurado é passado como parametro m
		int remover(int mat){
			No *atual = inicio;
			while(atual != NULL){
				if(atual -> mat == mat){
					if(atual == inicio){
						inicio = inicio -> prox;
						inicio->ant = NULL;
					}else if(atual == fim){
						fim = fim->ant;
						fim -> prox = NULL;
					}else{
						atual->ant->prox = atual->prox;
						atual->prox->ant = atual->ant;
					}
					free(atual);
					return 1;
				}
				atual = atual -> prox;
			}
			return 0;
		}
};
main(){
   Lista *l=new Lista(); // cria o objeto l do tipo da classe Lista
   //faça aqui o teste de todos os métodos da classe
   l->addToFinal(2, "Estolfo");
   l->addToFinal(3, "Istolfo");
   l->addToIni(1, "Astolfo");
   l->addToFinal(5, "Ustolfo");
   l->addOrd(4,"Ostolfo");
   cout<<"------------------"<<endl;
   l->mostraIniFim();
   cout<<"------------------"<<endl;
   l->mostraFimIni();
   cout<<"------------------"<<endl;
   l->removerFinal();
   l->mostraIniFim();
   cout<<"------------------"<<endl;
   l->removerInicio();
   l->mostraIniFim();
   cout<<"------------------"<<endl;
   l->remover(3);
   l->mostraIniFim();
	
}
