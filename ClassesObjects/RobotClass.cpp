#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::endl;
using std::cout;
using std::cin;
//using namespace std;

class Person{//class for consumer and sellers
protected:
    string firstName;
    string lastName;
    double amtOfMoney;
    string DOB;
    int SSN;
    bool isConsumer;
public:   
    Person(){
        
    }
    Person(string firstN,string lastN, int ssn){
        firstName = firstN;
        lastName = lastN;
        SSN = ssn;
    }
   

    void getInfo(){//retrieves and prints info of specific user
        string name = lastName +", "+ firstName;
        cout<< name <<endl;
        cout<< DOB<<endl;
        cout<< "XXX-XX-"<< SSN<<endl;
        cout<< "Currently in your robo wallet you have $"<< amtOfMoney<< "."<<endl;
        if (isConsumer){
            cout<< "Not a seller.";
        }
    }
    void setUpAccount(){
        cout <<"What is your first name?: ";
        cin >> firstName;
        cout <<"What is your last name?: ";
        cin >> lastName;
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

void print(void* data, char type){
    switch(type){
        case 'D':
            for(int i = 0; i<((std::vector<Person>*)data)->size();i++){
                    (std::vector<Person>*)data[i]->getInfo();
            }
    }

}

int main(){

std::vector<Person> userDataBase;
int limit =  2;

for (int i=0;i<limit;i++){
    userDataBase[i].setUpAccount();
}

//User001.setUpAccount();
//User001.getInfo();

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