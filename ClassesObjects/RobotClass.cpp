#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;
using std::cin;
//using namespace std;

class Person{//class for consumer and sellers
protected:
    string name;
    double amtOfMoney;
    string DOB;
    int SSN;
    bool isConsumer;
public:   
    Person(){
        name = "";
    }
    Person(string Name, int ssn){
        name =Name;
        SSN = ssn;
    }
   

    void getInfo(){//retrieves and prints info of specific user
        cout<< name<<endl;
        cout<< DOB<<endl;
        cout<< "XXX-XX-"<< SSN<<endl;
        cout<< "Currently in your robo wallet you have $"<< amtOfMoney<< "."<<endl;
        if (isConsumer){
            cout<< "Not a seller.";
        }
    }
    void setUpAccount(){
        cout <<"What is your name?: ";
        cin >> name;
        cout<< endl;
        cout << "Date of birth?: ";
        cin >>DOB;
        cout<<endl;
        cout << "Last four of your social security number?: ";
        cin>> SSN;
        cout<<endl;
        cout << "How much would you initially like to deposit into your RoboWallet?: ";
        cin>> amtOfMoney;
        cout <<endl;
        string ans;
        cout << "Are you a consumer or seller?:"<<endl;
        cin >>ans;

        if (ans =="consumer")
            isConsumer = true;
        else
            isConsumer = false;




    }



};
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



int main(){


Person User001;
User001.setUpAccount();

 Robot Exo("Chappy", "Andry Canel");
 Exo.getInfo();

ArmRobot Hands("Hands","Jane Doe");
Hands.getInfo();
Hands.wave();
Hands.wave();
Hands.wave();



 system("pause>0"); 


 return 0;   
}