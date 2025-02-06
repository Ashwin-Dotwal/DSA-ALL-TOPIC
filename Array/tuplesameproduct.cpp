
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Function to count the number of valid tuples
int tupleSameProduct(vector<int> &nums)
{
  unordered_map<int, int> productCount;
  int n = nums.size();
  int count = 0;

  // Step 1: Store all product pairs in the map
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      int product = nums[i] * nums[j];
      productCount[product]++;
    }
  }

  // Step 2: Count valid tuples
  for (auto &entry : productCount)
  {
    int k = entry.second;
    if (k > 1)
    {
      count += 8 * (k * (k - 1) / 2); // C(k,2) combinations, each can be arranged in 8 ways
    }
  }

  return count;
}

int main()
{
  vector<int> nums = {2, 3, 4, 6};        // Example input
  cout << tupleSameProduct(nums) << endl; // Output: 8
  return 0;
}