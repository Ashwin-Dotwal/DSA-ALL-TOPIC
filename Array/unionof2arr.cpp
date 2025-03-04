#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int sizea = 5;
    int brr[] = {4, 1, 9, 1};
    int sizeb = 4;
    vector<int> ans;
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }
    cout << "printing array" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}

// code for union of two array
#include <bits/stdc++.h>

using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
{
    set<int> s;
    vector<int> Union;
    for (int i = 0; i < n; i++)
        s.insert(arr1[i]);
    for (int i = 0; i < m; i++)
        s.insert(arr2[i]);
    for (auto &it : s)
        Union.push_back(it);
    return Union;
}

int main()

{
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = FindUnion(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto &val : Union)
        cout << val << " ";
    return 0;
}
