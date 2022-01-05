#include<iostream>
using namespace std;
main(){
	int v[3] = {1,2,3};
	int *pnt;
	pnt =v;
	cout << "value pnt[1]: " << pnt[1] << endl;
	cout << "addres pnt[1]: " << &pnt[1];
}
