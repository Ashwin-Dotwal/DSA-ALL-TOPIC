#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int maxArea(vector<int> &height)
  {
    int maxwater = 0;
    int s = 0;
    int e = height.size() - 1;
    while (s < e)
    {
      int w = e - s;
      int ht = min(height[s], height[e]);
      int currWater = w * ht;
      maxwater = max(currWater, maxwater);
      if (height[s] < height[e])
      {
        s++;
      }
      else
      {
        e--;
      }
    }
    return maxwater;
  }
};

int main()
{
  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  Solution sol;
  int result = sol.maxArea(height);
  cout << "Maximum water that can be stored is: " << result << endl;
  return 0;
}
