

class Solution
{
public:
  int climbStairs(int n)
  {

    if (n == 0 || n == 1)
    {
      return 1;
    }

    int prev2 = 1, prev1 = 1; // initally at 0th and 1st index

    for (int i = 2; i <= n; i++)
    {
      int curr = prev1 + prev2;
      prev2 = prev1; // update pointers
      prev1 = curr;
    }
    return prev1;
  }
};