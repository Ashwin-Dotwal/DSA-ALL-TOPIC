#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the longest alternating even-odd subsequence
int maximumLength(vector<int> &nums)
{
  int even_dp = 0, odd_dp = 0;

  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] % 2 == 0)
      even_dp = max(even_dp, odd_dp + 1);
    else
      odd_dp = max(odd_dp, even_dp + 1);
  }

  return max(even_dp, odd_dp);
}

int main()
{
  vector<int> nums = {1, 2, 3, 4};
  int maximum = maximumLength(nums);

  cout << "maximum: " << maximum << endl;
  return 0;
}
