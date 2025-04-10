#include <iostream>

#include <vector>

using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a)
{
  int largest = INT_MIN, secondLargest = INT_MIN;
  int smallest = INT_MAX, secondSmallest = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    // Largest and second largest
    if (a[i] > largest)
    {
      secondLargest = largest;
      largest = a[i];
    }
    else if (a[i] > secondLargest && a[i] != largest)
    {
      secondLargest = a[i];
    }

    // Smallest and second smallest
    if (a[i] < smallest)
    {
      secondSmallest = smallest;
      smallest = a[i];
    }
    else if (a[i] < secondSmallest && a[i] != smallest)
    {
      secondSmallest = a[i];
    }
  }

  return {secondLargest, secondSmallest};
}
int main()
{
  vector<int> a{1, 5, 8, 9, 2, 3, 6};
  int n = a.size(); // safer than hardcoding 7

  vector<int> result = getSecondOrderElements(n, a);

  cout << "The second largest element: " << result[0] << endl;
  cout << "The second smallest element: " << result[1] << endl;

  return 0;
}
