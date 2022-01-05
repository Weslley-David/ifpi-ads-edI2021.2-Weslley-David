#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class No{
	public:
		int mat;
		char nome[23];
		No *prox;
		No(int m,char n[23]){
			mat=m;
			strcpy(nome,n);
			prox=NULL;
		}
};

class Lista{
	public:
		No *inicio;
		No *fim;
	
	    Lista(){
	    	inicio = NULL;
	    	fim = NULL;
		}	
		void addToFinal(int m, char n[23]){
			No *novo= new No(m,n);
			if (fim == NULL){
				inicio = novo;
				fim = novo;
			}
			else{
				fim->prox = novo;
				fim = novo;
			}
		}
		
			
		bool lst_vazia(){
			return (inicio==NULL);
		}
		
		void addToInicio(int m,char n[23]){
			No *novo = new No(m,n);
			if (fim == NULL){
				inicio = novo;
				fim = novo;
			}
			else{
				novo -> prox = inicio;
				inicio = novo;
			}
			
			
		}
		
		void mostra(){
			if (lst_vazia()){
				cout<<"\nLista vazia!!!";
			}
			else{
				No *item = inicio;
				do{
					cout<<item -> mat << " " << item -> nome<<endl;
					item = item -> prox;
				}while(item -> prox != NULL);
			}
		}
		
		int remove(int mat){
			No *atual = inicio;
			No *anterior = NULL;
			while(atual != NULL){
				if(atual -> mat == mat){
					if(atual == inicio){
						inicio = inicio -> prox;
					}else if(atual == fim){
						fim = anterior;
						fim -> prox = NULL;
					}else{
						anterior -> prox = atual -> prox;
					}
					free(atual);
					return 1;
				}
				anterior = atual;
				atual = atual -> prox;
			}
			return 0;
		}
		
		// auxiliar no metodo remove, vai 
		//retornar o endereco do anterior
		No *busca(int mat){
			int achou = 0;
			No *item = inicio;
				do{
					if(item -> mat == mat){
						cout<<item -> mat << " " << item -> nome<<endl;
						achou = 1;
					}
					item = item -> prox;
				}while(item -> prox != NULL);
				if(achou != 1){
					cout<< "aluno nao encontrado"<< endl;
				}
		}
		
		void removeTodos(){
			No *atual=inicio;
			No *proximo=NULL;
			while (atual!=NULL){
					proximo=atual->prox;
					cout<<"\n Apaga:"<<atual->nome;
					free(atual);
					atual=proximo;						
			}
			inicio=atual;
		}
		
		// criar uma nova lista que seja o inverso da primeira
		void crialistainversa(){
				No *atual = inicio;
				No *anterior = NULL;
				
				No *novoInicio = NULL, *novoFim = NULL, *novo;
				
				while(atual != NULL){
					novo = (No *)malloc(sizeof(No));
					novo -> mat = atual -> mat;
					strcpy(novo->nome, atual->nome);
					if(novoInicio == NULL){
						novo -> prox = NULL;
						novoInicio = novo;
						novoFim = novo;
					}else{
						novo -> prox = novoInicio;
						novoInicio = novo;
					}
					anterior = atual;
					atual = atual -> prox;
				}
				
				No *item = novoInicio;
				do{
					cout<<item -> mat << " " << item -> nome<<endl;
					item = item -> prox;
				}while(item -> prox != NULL);
		}
		
		//inverter a propria lista
		void listainvertida(){
				No *no = inicio;
				No *anterior = NULL;
				No *proximo, *aux;
				while(no != NULL){
					proximo = no -> prox;
					no -> prox = anterior;
					anterior = no;
					no = proximo;
				}
				aux = inicio;
				inicio = fim;
				fim = aux;
				
		}
};
main(){
   Lista *l=new Lista();
   l->addToFinal(1,"Joao");
   l->addToFinal(2,"Gabriela");
   l->addToFinal(3,"Fabiola");
   l->addToFinal(4,"Julian");
   l->addToInicio(5,"Joana Oliveira");
   l->addToInicio(6,"Cristiano Oliveira");
   l->mostra();
   //l->busca(7);
   //l->remove(4);
   l->listainvertida();
   l->mostra();
  //l->listainvertida();
  //l->mostra();

}
