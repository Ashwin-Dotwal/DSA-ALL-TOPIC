class Solution
{
public:
  int findMin(vector<int> &nums)
  {
    int s = 0, e = nums.size() - 1;
    int ans = INT_MAX;
    while (s <= e)
    {
      int mid = s + (e - s) / 2;
      if (nums[s] <= nums[mid])
      {
        ans = min(nums[s], ans);
        s = mid + 1;
      }
      else
      {
        e = mid - 1;
        ans = min(ans, nums[mid]);
      }
    }
    return ans;
  }
};