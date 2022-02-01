#include <iostream>
#include <string>
#include <vector>
#include "RobotClass.h"
#include "Person.h"
using std::string;
using std::endl;
using std::cout;
using std::cin;
using std::vector;



void print(void* data, char type){
    switch(type){
        case 'P':
        {
            vector<Person>& v = *reinterpret_cast<vector<Person> *>(data);
               std::vector<Person>::iterator it;
               for(it = v.begin(); it!=v.end();++it){
                   it->getInfo();
               }
        
        }

        case 'i':
        {
            cout << *((int*)data) <<endl;

        }    
     }    
             
           
    

}




int main(){

std::vector<Person> userDataBase;
int limit =  1;

for (int i=0;i<limit;i++){
    Person *User = new Person;
    userDataBase.push_back(*User);
    userDataBase[i].setUpAccount();
}
print(&userDataBase,'P');

userDataBase.clear();

//User001.setUpAccount();
//User001.getInfo();

/*  Robot Exo("Chappy", "Andry Canel");
 Exo.getInfo();

ArmRobot Hands("Hands","Jane Doe");
Hands.getInfo();
Hands.wave();
Hands.wave();
Hands.wave();
 */


 system("pause>0"); 


 return 0;   
}