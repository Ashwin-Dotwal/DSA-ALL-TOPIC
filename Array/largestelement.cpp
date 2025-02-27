#include <iostream>
using namespace std;

// for largest element of array
int largest(int arr[], int n)
{

    int largest = arr[0];

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > largest)
        {

            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[] = {5, 6, 8, 9, 15, 12};
    int n = 6;

    int larg = largest(arr, n);
    cout << "largest element" << " " << larg << endl;
    return 0;
}