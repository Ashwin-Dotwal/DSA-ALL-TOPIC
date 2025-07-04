#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void swapAlternate(int arr[], int size)
{
  for (int i = 0; i < size; i = i + 2)
  {
    if (i + 1 < size)
    {
      swap(arr[i], arr[i + 1]);
    }
  }
}

int main()
{

  int even[] = {5, 9, 8, 7, 6, 2};
  int odd[] = {4, 8, 9, 5, 6};

  swapAlternate(even, 6);
  printArray(even, 6);
  return 0;
}