class Solution
{
public:
  void rotate(vector<int> &nums, int k)
  {
    k %= nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
  }
};

// second solution

class Solution
{
public:
  void rotate(vector<int> &nums, int k)
  {
    int n = nums.size();
    vector<int> temp(nums.size());
    for (int i = 0; i < n; i++)
    {
      temp[(i + k) % n] = nums[i];
    }
    nums = temp;
  }
};
