#include <iostream>
#include <string>


using std::string;
using std::cout;
using std::endl;


 int lengthOfLongestSubstring2(string s) 
    {
        int s_size = s.size();
        
        if(s_size==0 || s_size==1)
            return s_size;
        
        int char_occurance_table[128] = {0};
        
        int left = 0;
        int right = 0;
        int result = 0;
        
        while(right < s_size)
        {
            char r = s[right];//setting r to character of string s at right value
            char_occurance_table[r]++;//setting that character to 'visited' or 1
            
            while(char_occurance_table[r] > 1)//
            {
                char l = s[left];
                char_occurance_table[l]--; 
                left++;
            }
            
            result = result > right-left+1 ? result : right-left+1 ;
 
            right++;
        }
        return result;
    }

int lengthOfLongestSubstring(string s){
    cout << s << endl;
    if(s.empty()|| s.length()==1){
        
        return s.length();
    }

    
    int windowLeft = 0;
    int windowRight =0;
    int largestS = 0;
    string largestSubs = "";
    int alpha[128];
    std::fill_n(alpha, 128, 0);

    for(int i = windowRight; i <s.length(); i++){
        int index = abs( s.at(i) - 'a');
        cout << s.at(i) <<endl;
        alpha[index]++;
   
        while (alpha[index] > 1){
            int index2 = abs(s.at(windowLeft) - 'a');
            alpha[index2]--;

            windowLeft++;
            
           //largestS = largestSubs.length();   
        }
       largestS = largestS > i-windowLeft+1 ? largestS: i-windowLeft+1;

               
        }

        return largestS;
    }
   /*  if(largestSubs.length()>= largestS){
                   largestS = largestSubs.length();
               } 



    if(isUnique){
        largestS = s.length();
    }
 */

    





int main(){

    string s = "abcabcbb";

    cout << lengthOfLongestSubstring(s) << endl;

    system("pause>0");
    return 0;
}
