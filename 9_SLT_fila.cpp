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
#include<queue>
using namespace std;

int main(){
queue <int> fila;

//inserir um elemento no final da fila.
fila.push(7);
fila.push(9);
fila.push(5);
fila.push(4);
fila.push(3);
//remover elemento do inicio da fila. Não retorna o elemento removido.
fila.pop();

//obter elemento da frente da fila. Ele retorna o elemento sem removê-lo.
cout<<"inicio da fila: "<< fila.front()<<endl;

//verifica se a fila está vazia
cout<<fila.empty()<<endl;

//Tamanho atual da fila
cout<<fila.size()<<endl;

}
