#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums)
{

    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
            if (count > nums.size() / 2)
            {
                return nums[i];
            }
        }
    }
    return -1;
}

int main()
{

    vector<int> nums = {1, 2, 1, 2, 1, 2, 5, 2, 2};
    int ans = majorityElement(nums);
    cout << "majority element is" << ans << endl;
    return 0;
}