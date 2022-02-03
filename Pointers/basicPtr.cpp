#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void printChar (void* cPtr){

    cout << *((char*)cPtr) <<endl; 
}
int main(){

/* Point of pointer is for example:
pass values by reference to a function 
to return multiple values from a fucntion
in combination with arrays
with dynamic memory allocation
smart pointers
access an object of a derived class through the base class
*/

int n = 10;

int* ptr = &n; // basically holds the adress of a value

cout << ptr <<endl;//prints the address of n
cout << *ptr <<endl;//prints the value of n which is 10 rn
cout << &ptr <<endl;//prints the address of ptr

cout << &n << endl;//prints the address of n
*ptr = 20; // can actually change the value at n be dereferencing it through ptr
cout << n << endl;

char bruh = 'v';
char* v = &bruh;
printChar(&bruh);

system("pause>0");


return 0;

}