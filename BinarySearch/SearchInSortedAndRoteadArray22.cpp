class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target)
                return true;

            // If we can't determine the sorted half due to duplicates
            if (nums[st] == nums[mid] && nums[mid] == nums[end]) {
                st++;
                end--;
            }
            // Left half is sorted
            else if (nums[st] <= nums[mid]) {
                if (nums[st] <= target && target < nums[mid])
                    end = mid - 1;
                else
                    st = mid + 1;
            }
            // Right half is sorted
            else {
                if (nums[mid] < target && target <= nums[end])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return false;
    }
};
