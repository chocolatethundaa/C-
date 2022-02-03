#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main(){


int n = 10;

int* ptr = &n; // basically holds the adress of a value

cout << ptr <<endl;//prints the address of n
cout << *ptr <<endl;//prints the value of n which is 10 rn
cout << &ptr <<endl;//prints the address of ptr

cout << &n << endl;//prints the address of n
*ptr = 20; // can actually change the value at n be referencing it through ptr
cout << n << endl;

system("pause>0");


return 0;

}