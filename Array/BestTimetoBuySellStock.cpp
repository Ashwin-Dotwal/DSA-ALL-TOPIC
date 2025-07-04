
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &arr)
{
  int maxPro = 0;
  int n = arr.size();

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] > arr[i])
      {
        maxPro = max(arr[j] - arr[i], maxPro);
      }
    }
  }
  
  return maxPro;
}

int main()
{
  vector<int> arr{1, 8, 9, 4, 6, 7};
  int maxPro = maxProfit(arr);
  cout << "Max profit is: " << maxPro << endl;
}
