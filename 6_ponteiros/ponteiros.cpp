#include <iostream>
using namespace std;
main()
{
  int x = 7;
  int *ptr;
  ptr = &x;
  cout << "X addres is: " << ptr << endl;
  cout << "X value is : " << *ptr << endl;
}
