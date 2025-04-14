#include <iostream>
using namespace std;

void bublesort(int arr[], int n)
{

    bool isSwap = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            return;
        }
    }
}

void print(int arr[], int n)
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
    int arr[] = {5, 1, 9, 2, 7};
    bublesort(arr, n);
    print(arr, n);
    return 0;
}