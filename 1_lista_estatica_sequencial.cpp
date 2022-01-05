#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

//Estrutura do vetor
typedef struct aluno{
	int mat;
	string nome;
}Aluno;

//variável de controle e lista estática
int qa = 0;
Aluno turma[5];
int i = 0;

//Retorna a posição de uma matricula.
int procurar(int x){
	int i = 0;
	while(i < 5){
		if(turma[i].mat == x){
			return i;
		}
		i++;
	}
}

//Insere elementos na lista.
void inserir(){
	int cont;
	printf("\n Inserir Novo Aluno\n");
	do{
		if(qa < 5){
			printf("\n Matricula do Aluno: ");
			scanf("%d",& turma[qa].mat);
			printf("\n Nome: ");
			cin >> turma[qa].nome;
			qa++;
			printf("\n\n Aluno inserido com sucesso!!!\n\n");
		}
		else{
			printf("\n\n Turma cheia\n");
			break;
		}
		printf("\n\n inserir outro? (1-sim/ 2-nao)\n");
		scanf("%d",&cont);
	}while (cont == 1);
	system("cls");
}

//mostrar o sdados de um aluno com base no seu numero de matricula.
void consultar_mat(){
	int i, matprocurada, achou = -1, cont;
	do{
		printf("\n Consultar aluno por matricula. \n\n");
		printf("\n Matricula do aluno: ");
		scanf("%d",& matprocurada);
		achou = procurar(matprocurada);
		
	if(achou != -1){
		printf("%d \n", turma[achou].mat);
		cout<< turma[achou].nome <<endl;
	}else{
		printf("\n\n matricula nao encontrada!!!");
		printf("\n\nConsultar novamente? (1-sim/ 2-nao)");
		scanf("%d",&cont);
	}
		
	}while(cont == 1);
	system("pause");
	system("cls");
}

//
void remover_00(int indice){
	if(indice < 0 || indice > i - 1){
		cout<< "elemento nao encontrado" << endl;
	}else{
		turma[indice].mat = turma[i - 1].mat;
		turma[indice].nome = turma[i - 1].nome;
		i--;
	}
}

//estratégia 2: mover TODOS os elementos que estão APÓS  o elemento que deve ser removido UMA POSIÇÃO A FRENTE.
void remover_01(int indice){
		if(indice < 0 || indice > i - 1){
			cout<< "elemento nao encontrado" << endl;
		}else{
		 while(indice < i){
 			turma[indice].mat = turma[indice + 1].mat;
 			turma[indice].nome = turma[indice + 1].nome;
 			indice++;
		}
			i--;
		}
}

//mostra todas as informações de todos alunos cadastrados
void mostrar_alunos(){
	int i = 0;
	printf("=Alunos======================\n");
	while(i < qa){
		cout<< turma[i].mat;
		cout<< " . ";
		cout<< turma[i].nome <<endl;
		i++;
	}
	system("pause");
	system("cls");
}

//remove um elemento da lista.
void remover00(){
	int matprocurada, i, cont, achou, conrem, resp;
	do{
		printf("\n remover aluno\n");
		printf("\n Matricula do aluno: ");
		scanf("%d",& matprocurada);
			achou = procurar(matprocurada);
			if( achou != 1){
				printf("%d", achou);
				printf("\nDeseja remover aluno? ");
				scanf("%d", &resp);
				if(resp == 1){
					remover_00(achou);
					printf("\n aluno removido com sucesso\n");
				}else{
					printf("\n aluno nao removido\n");
					break;
				}
			}else{
				printf("\n\n aluno nao encontrado.\n\n");
				printf("\n\nConsultar novamente? (1-sim/ 2-nao)");
				scanf("%d", &cont);
			}
		}while(cont == 1);
		system("cls");
}

main(){
	bool loop = true;
	int resp;
	while(loop){
		printf("=============== MENU =============\n");
		printf("1.INSERIR ALUNO===================\n");
		printf("2.CONSULTAR MATRICULA=============\n");
		printf("3.REMOVER ALUNO===================\n");
		printf("4.LISTAR ALUNOS===================\n");
		printf("5.SAIR============================\n");
		scanf("%d",&resp);
		system("cls");
		if( resp == 1){
			inserir();
		}else if( resp == 2){
			consultar_mat();
		}else if(resp == 3){
			remover00();
		}else if(resp == 4){
			mostrar_alunos();
		}else if(resp == 5){
			loop = false;
		}else{
			printf("opcao invalida.\n");
		}
	}
}
