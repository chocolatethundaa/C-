
#include <iostream>
#include <string>
#include <vector>
#include <RobotClass.h>
using std::string;
using std::endl;
using std::cout;
using std::cin;
using std::vector;



class Person{//class for consumer and sellers
protected:
    string firstName;
    string lastName;
    double amtOfMoney;
    string DOB;
    int SSN;
    bool isConsumer;
    vector<Robot> Inventory;
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
        cout << endl;
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