#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sum = n * (n + 1) / 2;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += nums[i];
    }
    return sum - sum2;
}

int main()
{
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
