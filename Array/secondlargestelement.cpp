#include <iostream>
using namespace std;

// for second largest element
int print2largest(int arr[], int n)
{
  // code here
  int lar = arr[0];
  int lar2 = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > lar)
    {
      lar2 = lar;
      lar = arr[i];
    }
    if (arr[i] < lar && arr[i] > lar2)
    {
      lar2 = arr[i];
    }
  }
  return lar2;
}

int main()
{
  int arr1[] = {2, 8, 9, 7, 15};
  int n = 5;

  int largest = print2largest(arr1, n);

  cout << "second largets element " << largest << endl;
  return 0;
}