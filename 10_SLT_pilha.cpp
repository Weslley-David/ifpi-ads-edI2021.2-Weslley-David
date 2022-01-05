/*#include<stdio.h>
namespace teste{
	int a,b;
}
int main(){
	teste::a = 0;
	printf("%d", teste::a);
	return 0;
}
*/
#include<iostream>
#include<stack>
using namespace std;

int main(){
stack <int> pilha;

//inserir um elemento no topo da pilha.
pilha.push(7);
pilha.push(6);
pilha.push(5);
pilha.push(4);
pilha.push(3);
//remover elemento do topo. Não retorna o elemento removido.
pilha.pop();

//obter elemento no topo da lista. Ele retorna o elemento sem removê-lo.
cout<<"Topo: "<< pilha.top()<<endl;

//verifica se a pilha está vazia
cout<<pilha.empty()<<endl;

//Tamanho atual da pilha
cout<<pilha.size()<<endl;

}
