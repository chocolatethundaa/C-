#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;
using std::cin;
//using namespace std;


class Robot{
private:
    string name;
    string ownerName;
    double price;

public:
    Robot(string Name, string OwnerName){
        name = Name;
        ownerName = OwnerName;
    }

    void getInfo(){
        cout<< "This robot name is "<< name << " and the owner is "<< ownerName<< "."<< endl;
    }

};

class ArmRobot: public Robot{
private:
int degreesOfFreedom;
double weight;
double height;

public:
    ArmRobot(string Name, string OwnerName): Robot(Name,OwnerName){

    }
};



int main(){

 Robot Exo("Chappy", "Andry Canel");
 Exo.getInfo();

ArmRobot Hands("Hands","Jane Doe");
Hands.getInfo();

 system("pause>0"); 


 return 0;   
}