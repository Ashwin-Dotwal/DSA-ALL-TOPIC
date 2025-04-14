#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int smallestID = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[smallestID])
      {
        smallestID = j;
      }
    }
    swap(arr[i], arr[smallestID]);
  }
}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
    cout << endl;
  }
}

int main()
{
  int n = 5;
  int arr[] = {4, 8, 5, 9, 2};

  selectionsort(arr, n);
  printArray(arr, n);
  return 0;
}