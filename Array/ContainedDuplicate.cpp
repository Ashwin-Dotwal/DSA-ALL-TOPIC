#include <iostream>
#include <vector>
#include <algorithm> // for sort()

using namespace std;

class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    sort(nums.begin(), nums.end()); // Sort the array
    for (int i = 0; i < nums.size() - 1; i++)
    {
      if (nums[i] == nums[i + 1])
      {
        return true; // Duplicate found
      }
    }
    return false; // No duplicates found
  }
};

int main()
{
  Solution solution;

  vector<int> nums = {1, 2, 3, 4, 5, 1}; // Example input

  if (solution.containsDuplicate(nums))
  {
    cout << "Contains duplicate." << endl;
  }
  else
  {
    cout << "No duplicates." << endl;
  }

  return 0;
}
