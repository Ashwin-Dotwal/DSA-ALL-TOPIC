
//BRUT FORCE SOLUTION
class Solution {
public:
int brute(vector<int>&nums)
{
     int flg=0;
      int n=nums.size();
      for(int i=0;i<=n;i++)  
      {
          int flg=0;
          for(int j=0;j<n;j++)
          {
              if(i==nums[j])
              {
                  flg=1;
                  break;
              }
          }
          if(flg==0) return i;

      }
      return 1;
}
}

//OPTIMAL SOLUTION
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x = nums.size();
        for(int i=0;i<nums.size();i++){
            x=x^i;
            x=x^nums[i];
        }
        return x;
    }
};