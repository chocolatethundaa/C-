#include <iostream>
#include <string>
#include <cmath>


using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int l1places = 0;
        int l2places = 0;
        int firstNum = 0;
        int secNum = 0;
        ListNode *ans;
        ans = new ListNode;
        ans->val= 0;
        while(l1){
            int place = pow(10,l1places);
            cout << "place : " << place <<endl;
            firstNum += (l1->val * place);
          
            l1 = l1->next;
            l1places++;

        }
          while(l2){
            int place = pow(10,l2places);
            secNum += l2->val * place;
            l2 = l2->next;
            l2places++;

        }
        int sum = firstNum + secNum;
        cout << sum <<endl;

        return ans;
    }



int main(){
    int arr1[]= {2,4,3};
    int arr2[]= {5,6,4};

   // ListNode *example = new ListNode(1);

   // cout << example->val;
    ListNode *num1Root = new ListNode();
    ListNode *num1 = num1Root;

    int firstNum = 0;
    ListNode *num2Root = new ListNode();
    ListNode *num2 = num2Root;

    for(auto x :arr1){
        num1->val= x;
        //cout << num1->val<<endl;
        num1 = num1->next;
        num1 = new ListNode(0);
    }
 //cout << num1Root->val <<endl;
    firstNum = num1Root->val;
   // cout << num1Root->val<<endl;

     for(auto x :arr2){
        num2->val= x;
        num2 = num2->next;
        num2 = new ListNode(0);
    }
    //num1 = num1Root;
   // num2 = num2Root;

 addTwoNumbers(num1,num2);
    system("pause>0");
    return 0;
}

