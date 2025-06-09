class Solution {
public:
    vector<int> findFirstOccurance(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int ans = -1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                ans=mid;

                e=mid-1;
            }
            else if (target < nums[mid]){
                e=mid-1;
            }
             else if (target > nums[mid]){
                s=mid+1;
            }
             return ans;
            


        }
       
        
    }
};