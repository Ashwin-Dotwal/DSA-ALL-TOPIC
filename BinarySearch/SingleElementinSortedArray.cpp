// Single Element in a Sorted Array
class Solution
{
public:
  int singleNonDuplicate(vector<int> &nums)
  {
    int n = nums.size();
    for (int i = 0; i < nums.size() - 1; i = i + 2)
    {
      if (nums[i] != nums[i + 1])
      {
        return nums[i];
      }
    }
    return nums[n - 1];
  }
};