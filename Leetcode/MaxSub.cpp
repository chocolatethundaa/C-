#include <iostream>
#include <vector>

using std::vector;

int maxSubArray(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        
  int maxSum = nums[0];//-2
  int leftW = 0;
  int rightW = 1;   
    int currentSum = nums[0];//-2
  while (rightW <nums.size()) {

      currentSum += nums[rightW];//1

      while((currentSum < maxSum || currentSum<nums[rightW])&& leftW<rightW){//-1<-2
          if((currentSum-nums[rightW])  >0){
              break;
          }
            currentSum -= nums[leftW];
            if(currentSum>maxSum){
                maxSum = currentSum;
            }
            leftW++;
      }

         if(currentSum>maxSum){//-1>-2
                maxSum = currentSum;
            }

        rightW++;

  }  
        
        
        
        return maxSum;
        
}






int main(){
vector<int> nums = {-1,-1};


std::cout <<maxSubArray(nums)<< std::endl;



system("pause>0");

return 0;
}