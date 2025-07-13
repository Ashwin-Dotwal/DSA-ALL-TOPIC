#include <iostream>
#include <vector>
using namespace std;

int maxWater(vector<int> &height)
{
  int maxarea = 0;
  int start = 0;
  int end = height.size() - 1;
  while (start < end)
  {
    int h = min(height[start], height[end]);
    int w = end - start;
    int currWater = h * w;
    maxarea = max(currWater, maxarea);
    if (height[start] < height[end])
    {
      start++;
    }
    else
    {
      end--;
    }
  }
  return maxarea;
}

int main()
{
  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  int result = maxWater(height);
  cout << "container with most water" << result << endl;
}