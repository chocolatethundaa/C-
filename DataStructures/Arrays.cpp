#include <iostream>

using std::cout;
using std::endl;

void printArray(int *arr, int size){

    for(int i =0;i <size;i++){
        cout << arr[i] << " ";

    }
    cout <<endl;
  /*   int foo[5];
    for(int i =0;i <size;i++){
        cout << foo[i] << " ";

    } */
}

int bar[5];

int main(){


int foo[5];

printArray(foo,5);
printArray(bar,5);

system("pause>0");

return 0;
}