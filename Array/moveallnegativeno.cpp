#include <iostream>
using namespace std;

void moveALLnegative(int *a, int n)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (a[low] < 0)
        {
            low++;
        }
        else if (a[high] > 0)
        {
            high--;
        }
        else
        {
            swap(a[low], a[slow]);
        }
    }
}
int main()
{
    int a[] = {4, 9, -5, 1, -8, -6};
    int n = 6;

    moveALLnegative(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}