#include <iostream>

using namespace std;

bool isSorted(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i + 1] < arr[i])
      return false;
  }
  return true;
}

int main()
{
  int arr[] = {1, 2, 3, 41, 5}, n = 5;
  bool ans = isSorted(arr, n);
  if (ans)
    cout << "True" << endl;
  else
    cout << "False" << endl;

  return 0;
}