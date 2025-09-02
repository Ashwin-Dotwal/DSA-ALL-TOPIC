

// left rotate by 1 place;

#include <bits/stdc++.h>
vector<int> rotateArray(vector<int> &arr, int n)
{
    // Write your code here.
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    return arr;
}

// gfg
class Solution
{
public:
    void rotate(vector<int> &arr)
    {
        int n = arr.size();
        int temp = arr[n - 1]; // store last element
        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1]; // shift elements right
        }
        arr[0] = temp; // put last element at front
    }
};
