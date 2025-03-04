#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int duplicateNumbersXOR(vector<int> &nums)
{
  sort(nums.begin(), nums.end());
  int ans = 0;
  for (int i = 0; i < nums.size() - 1; i++)
    if ((nums[i] ^ nums[i + 1]) == 0)
      ans = ans ^ nums[i];
  return ans;
}
int main()
{
  vector<int> nums = {1, 2, 1, 3};

  int ans1 = duplicateNumbersXOR(nums);
  cout << "XOR is" << ans1 << endl;
  return 0;
}