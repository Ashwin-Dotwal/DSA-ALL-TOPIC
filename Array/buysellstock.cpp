
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr)
{
  int maxPro = 0;
  int n = arr.size();
  int minPrice = INT_MAX;

  for (int i = 0; i < arr.size(); i++)
  {
    minPrice = min(minPrice, arr[i]);
    maxPro = max(maxPro, arr[i] - minPrice);
  }

  return maxPro;
}

int main()
{
  vector<int> arr = {7, 1, 5, 3, 6, 4};
  int maxPro = maxProfit(arr);
  cout << "Max profit is: " << maxPro << endl;
}

class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int min_price = prices[0];
    int max_price = 0;
    for (int i = 1; i < prices.size(); i++)
    {
      min_price = min(prices[i], min_price);
      max_price = max(max_price, prices[i] - min_price);
    }
    return max_price;
  }
};
