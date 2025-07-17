#include <iostream>
#include <vector>
using namespace std;

int maximumLength(vector<int> &nums, int k)
{
  int res = 2;

  // Try all possible starting mod values
  for (int j = 0; j < k; ++j)
  {
    vector<int> dp(k, 0); // dp[mod] = length of sequence ending with mod

    for (int num : nums)
    {
      int mod = num % k;
      int pos = (j - mod + k) % k; // Adjusted for negative values
      dp[mod] = dp[pos] + 1;
    }

    for (int len : dp)
    {
      res = max(res, len);
    }
  }

  return res;
}

int main()
{
  vector<int> nums = {1, 2, 3, 4, 5};
  int k = 2;

  int ans = maximumLength(nums, k);

  cout << "ans is" << ans << endl;
  return 0;
}