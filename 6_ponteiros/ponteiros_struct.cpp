#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
main(){
	typedef struct {
		int a;
		char b;
		float c;
	} Reg;
	
	Reg r =  {1, 'k' , 1.5};  
	Reg *pnt = &r;
	cout << "valor a : " << pnt->a << endl;
	cout << "valor b : " << pnt->b << endl; 
	cout << "valor c : " << pnt->c << endl;
	cout << "endereco: " << pnt<< endl;
}
