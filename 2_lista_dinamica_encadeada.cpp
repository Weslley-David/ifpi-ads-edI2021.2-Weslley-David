#include <stdio.h>
#include  <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

typedef struct aluno{
	int mat;
	char nome[20];
	aluno *prox;	
}Aluno;

//principais
Aluno *inicio = NULL;
Aluno *fim = NULL;
Aluno *novo;

//inclui o elemento no final da lista
void incluirNoFinal(Aluno e){
	novo = (Aluno*) malloc(sizeof(Aluno));
	novo->mat = e.mat;
	strcpy(novo->nome,e.nome);
	novo->prox = NULL;
	
	novo -> prox = inicio;
	inicio = novo;
}

//inclui o elemento no inicio da lista
void incluirNoInicio(Aluno e){
	novo = (Aluno*) malloc(sizeof(Aluno));
	novo->mat = e.mat;
	strcpy(novo->nome,e.nome);
	novo->prox = NULL;
	
	if(inicio == NULL){
		inicio = novo;
		fim = novo;
	}else{
		fim -> prox = novo;
		fim = novo;//fim = fim -> prox
	}
}


//retorna o elemento se encontrado
//senao encontrado retorna NULL
Aluno procura(int mat){	
	Aluno *noatual = NULL;
		noatual = inicio; int achou = 0;
		while(noatual != NULL){
			if(noatual -> mat == mat){
				achou = 1;
				printf("------------------\n");
				printf("%9d %-20s\n", noatual -> mat, noatual -> nome);
				printf("------------------\n");
				break;
			}else{
				noatual = noatual -> prox;
			}
		}
		if(achou == 0){
				printf("aluno nao encontrado.\n");
			}
		system("pause");
}

//mostra TODOS os elementos da lista
void mostra(){
	Aluno *atual = inicio;
	while(atual != NULL){
		printf("%d ", atual -> mat);
		printf("%s\n", atual -> nome);
		atual = atual -> prox;
	}
	system("pause");
}

//remover o elemento da lista, retorna 1 se o elemento for encontrado e removido
//retorna 0 se o elemento nao existir na lista 
//pesquisem sobre como fazer esse metodo.. no video 4 ele nao foi explicado totalmente
int remover(int mat){
	Aluno *atual = inicio;
	Aluno *anterior = NULL;
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

//faça um menu no metodo main com as opçoes para as funcoes acima

main(){
	int choice;
	bool loop = true;
	int matricula;
	while(loop == true){
		cout<<"---------------------------------------------"<<endl;
		cout<<"1 - incluir elemento(final).................."<<endl;
		cout<<"2 - incluir incio(inicio)...................."<<endl;
		cout<<"3 - procurar por matricula..................."<<endl;
		cout<<"4 - mostrar elementos........................"<<endl;
		cout<<"5 - remover elementos........................"<<endl;
		cout<<"6 - sair....................................."<<endl;
		
		cin>>choice;
		if(choice == 1){
			Aluno data;
			cout<<"matricula: ";
			cin>>data.mat;
			cout<<"nome     : ";
			cin>>data.nome;
			incluirNoInicio(data);
		}else if(choice == 2){
			Aluno data;
			cout<<"matricula: ";
			cin>>data.mat;
			cout<<"nome     : ";
			cin>>data.nome;
			incluirNoFinal(data);
		}else if(choice == 3){
			cout<<"Matricula: ";
			cin>> matricula;
			procura(matricula);
		}else if(choice == 4){
			mostra();
		}else if(choice == 5){
			cout<<"Matricula: ";
			cin>> matricula;
			remover(matricula);
		}else if(choice == 6){
			loop = false;
		}else{
			cout<<"=============================================="<<endl;
			cout<<"============opcao nao encontrada=============="<<endl;
			cout<<"=============================================="<<endl;
			system("pause");
		}
		system("cls");
	}
	
}
	
	
	

