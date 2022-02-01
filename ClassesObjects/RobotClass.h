#include <iostream>
#include <string>
#include <vector>
#include <Person.h>

using std::string;
using std::endl;
using std::cout;
using std::cin;
using std::vector;
//using namespace std;


class Robot{//class for the actual robots
protected:
    string name;
    string ownerName;
    double price = 0;

public:
    Robot(string Name, string OwnerName){
        name = Name;
        ownerName = OwnerName;
    }

    void getInfo(){
        cout<< "This robot name is "<< name << " and the owner is "<< ownerName<< "."<< endl;
        cout <<"The price of this current model is $"<< price <<endl;

    }
    void setPrice(double Price){
        price = Price;
    }

    double getPrice(){
        return price;
    }
    void printPrice(){
    cout <<"The price of this current model is $"<< price <<endl;

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

    void wave(){
        cout<< name << " is waving...."<<endl;
    }
};

