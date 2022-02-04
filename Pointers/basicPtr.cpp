#include <iostream>
#include <string>
#include <vector>
#include <list>

using std::cout;
using std::cin;
using std::endl;

void printChar (void* cPtr){//taking in a void pointer

    cout << *((char*)cPtr) <<endl; 
}


void getMaxOddsandMaxEvens(int nums[],int size, int* odds, int* evens){

    for(int i = 1; i <size;i++){
        if(nums[i]%2==0 && nums[i]> *evens){
           
            *evens = nums[i];
        }
        else if(nums[i] > *odds){
            *odds = nums[i];
        }
    }
}



void print (void* data, char type){
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
            int size = *(int*)data;
            int* address = (int*)data;
            for (int i = 0; i < size;i++){
                int value = *(address+i);
                cout <<  value << " ";
            }
            break;
        }

        case 'v':{
            std::vector<int>* list = reinterpret_cast<std::vector<int>*>(data);
              std::vector<int>::iterator it;
               for(it = list->begin(); it!=list->end();++it){

                cout << *it << " ";
               }
               break;
        }
         case 'l':{
            std::list<int>* list = reinterpret_cast<std::list<int>*>(data);
              std::list<int>::iterator it;
               for(it = list->begin(); it!=list->end();++it){

                cout << *it << " ";
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

/* std::string word = "hi my name is Andry";
print(&word,'s');
int arr[] = {2,4,5,6,7};
std::vector<int> arr2 ={2,4,5,6,7}; 
std::list<int> arr3 = {2,4,5,6,7};
print(&arr3,'l'); */

int nums[10] = {2,1,-15,40,53,13,6,21,78,100};
int odds = nums[0];
int evens = nums[0];
getMaxOddsandMaxEvens(nums,10,&odds,&evens);

cout << "The highest odd number is " << odds << " the highest even number is " << evens << "."<< endl;

system("pause>0");


return 0;

}