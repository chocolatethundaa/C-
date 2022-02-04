#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

void printChar (void* cPtr){//taking in a void pointer

    cout << *((char*)cPtr) <<endl; 
}




void mainPrint (void* data, char type){
    switch(type){
        case 'i':{
            cout << *((int*)data)<<endl;
            break;
        }
        case 'c':{
            cout << *((char*)data)<<endl;
            break;
        }
        case 'b':{
            cout << *((bool*)data)<<endl;
            break;
        }
        case 's':{
            cout << *((std::string*)data)<<endl;
            break;
        }
        case 'a':{
            int size = 5;
            int* address = (int*)data;
            for (int i = 0; i < size;i++){
                int value = *(address+i);
                cout <<  value <<endl;
            }
            break;
        }

        case 'v':{
            std::vector<int>* list = reinterpret_cast<std::vector<int>*>(data);
              std::vector<int>::iterator it;
               for(it = list->begin(); it!=list->end();++it){

                cout << *it << ", ";
               }
               break;
        }


    }
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

/* int n = 10;

int* ptr = &n; // basically holds the adress of a value

cout << ptr <<endl;//prints the address of n
cout << *ptr <<endl;//prints the value of n which is 10 rn
cout << &ptr <<endl;//prints the address of ptr

cout << &n << endl;//prints the address of n
*ptr = 20; // can actually change the value at n be dereferencing it through ptr
cout << n << endl;

char bruh = 'v';
printChar(&bruh);
 */

std::string word = "hi my name is Andry";
mainPrint(&word,'s');
int arr[] = {2,4,5,6,7};
std::vector<int> arr2 ={2,4,5,6,7}; 
mainPrint(&arr2,'v');

system("pause>0");


return 0;

}