// slow fast pointer approch
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int slow = nums[0];
        int fast = nums[0];
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        fast = nums[0];
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};

// first aproch
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return nums[i];
            }
        }
        return -1;
    }
};

// second approch
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int ans = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]);
            if (nums[index] < 0)
            {
                ans = index;
                break;
            }
            nums[index] *= -1;
        }
        return ans;
    }
};

// third approch
// positioning
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        while (nums[0] != nums[nums[0]])
        {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
            for (int j = i + 1; j < nums.size(); j++)
                if (nums[i] == nums[j])
                    return nums[i];
        return -1;
    }
};


//takeuforword;
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.

  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
	
}

