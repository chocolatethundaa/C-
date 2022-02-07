#include <iostream>
#include <string>


using std::string;
using std::cout;
using std::endl;

//need good hash function to map keys to value
//needs search, insert, and delete operations
//account for collisions in keys


//simple hash fucntion for strings
long hash(string s,long capacity){
    long hash = 0;

    for(char c: s){
        hash += c;
    }
    std::cout << hash << std::endl;
    return hash%capacity;

}





int main(){

    string hi = "abcabcbb";
    string hi2 = "abc";
    string hi3 = "bca";
    string hi4 = "AS";
    string hi5 = "ASSA";
    long n = hi.length();
    n = n*(n+1)/2;//size of hashtable should be the amount of substrings possible in the string???idk
    std::cout << n << std::endl;

    std::cout << hash(hi,n)<< std::endl;
    std::cout << hash(hi2,n)<< std::endl;
    std::cout << hash(hi3,n)<< std::endl;
    std::cout << hash(hi4,n)<< std::endl;
    std::cout << hash(hi5,n)<< std::endl;


system("pause>0");
return 0;
}