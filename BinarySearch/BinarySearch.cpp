class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    int s = 0;
    int e = nums.size() - 1;

    while (s <= e)
    {
      int mid = (s + e) / 2;
      if (nums[mid] == target)
      {
        return mid;
      }
      else if (target < nums[mid])
      {
        e = mid - 1;
      }
      else
      {
        s = mid + 1;
      }
    }
    return -1;
  }
};