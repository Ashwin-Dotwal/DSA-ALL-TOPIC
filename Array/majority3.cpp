#include <iostream>
#include <vector>
#include <climits> // Needed for INT_MIN

using namespace std;

class Solution
{
public:
  vector<int> majorityElement(vector<int> &arr)
  {
    int n = arr.size();

    int cnt1 = 0, cnt2 = 0;
    int el1 = INT_MIN, el2 = INT_MIN;

    // **Step 1: Finding potential candidates**
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == el1)
      {
        cnt1++;
      }
      else if (arr[i] == el2)
      {
        cnt2++;
      }
      else if (cnt1 == 0)
      {
        el1 = arr[i];
        cnt1 = 1;
      }
      else if (cnt2 == 0)
      {
        el2 = arr[i];
        cnt2 = 1;
      }
      else
      {
        cnt1--;
        cnt2--;
      }
    }

    // **Step 2: Verify the candidates**
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == el1)
        cnt1++;
      else if (arr[i] == el2)
        cnt2++;
    }

    int mini = n / 3 + 1;
    vector<int> result;
    if (cnt1 >= mini)
      result.push_back(el1);
    if (cnt2 >= mini)
      result.push_back(el2);

    return result;
  }
};

int main()
{
  vector<int> arr = {11, 33, 33, 11, 33, 11};

  // Create an instance of the Solution class
  Solution sol;

  // Call the function using the instance
  vector<int> ans = sol.majorityElement(arr);

  cout << "The majority elements are: ";
  for (auto it : ans)
    cout << it << " ";
  cout << "\n";

  return 0;
}
