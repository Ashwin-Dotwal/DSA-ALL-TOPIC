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