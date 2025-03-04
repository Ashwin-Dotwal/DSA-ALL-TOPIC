#include <iostream>
using namespace std;

void solve(int arr[], int n)
{
  int temp[n];
  for (int i = 1; i < n; i++)
  {
    temp[i - 1] = arr[i];
  }
  temp[n - 1] = arr[0];
  for (int i = 0; i < n; i++)
  {
    cout << temp[i] << endl;
  }
}

int main()
{

  int arr[] = {1, 2, 4, 5, 6};
  int n = 5;
  solve(arr, n);
  return 0;
}