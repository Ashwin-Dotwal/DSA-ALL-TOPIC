#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{10, 20, 30, 40};
    int sum = 80;

    for (int i = 0; i < arr.size(); i++)
    {
        int element1 = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            int element2 = arr[j];
            for (int k = j + 1; k < arr.size(); k++)
            {
                int element3 = arr[k];
                if (element1 + element2 + element3 == sum)
                {
                    cout << element1 << "," << element2 << "," << element3 << endl;
                }
            }
        }
    }
}
// letcode solution
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int find, start, end;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            find = 0 - nums[i];
            start = i + 1;
            end = nums.size() - 1;
            while (start < end)
            {
                if (nums[start] + nums[end] == find)
                {
                    ans.push_back({nums[i], nums[start], nums[end]});
                    while (start < nums.size() - 1 && nums[start + 1] == nums[start])
                        start++;
                    while (end > 0 && nums[end - 1] == nums[end])
                        end--;
                    start++;
                }
                else if (nums[start] + nums[end] > find)
                    end--;
                else
                    start++;
            }
        }
        return ans;
    }
};
