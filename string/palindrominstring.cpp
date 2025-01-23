class Solution {
public:
    bool isPalindrome(string& str) {
        if(str<0){
            return false;
        }
       
        int i=0;
        int j=str.length()-1;
      
        while(i<=j){
            if(str[i]!=str[j]){
                return false;
            }
            else {
                i++;
                j--;
            }
        }
        return true;
        
    }
};