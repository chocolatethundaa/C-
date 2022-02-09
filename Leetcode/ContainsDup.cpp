#include <iostream>
#include <vector>
#include <unordered_set>

    using std::cout;
    using std::endl;
    using std::vector;
    using std::unordered_set;

  bool containsDuplicate(vector<int>& nums) {
      
      unordered_set<int> hashSet;

      for(const auto& x: nums){

          if(hashSet.find(x)!= hashSet.end()){
              return true;
          }
          else{
              hashSet.insert(x);
          }
      }

    return false;
  }


    int main(){

        vector <int> arr = {1,2,3,1};

        cout << containsDuplicate(arr) <<endl;

        system("pause>0");

        return 0;
    }