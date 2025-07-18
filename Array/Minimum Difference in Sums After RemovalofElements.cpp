class Solution
{
public:
  long long minimumDifference(vector<int> &nums)
  {
    int n = nums.size() / 3;

    // prefixMaxSum[i]: minimum sum of n largest elements from nums[0..i]
    vector<long long> prefixMaxSum(nums.size(), 0);
    priority_queue<int> maxHeap;
    long long leftSum = 0;

    for (int i = 0; i < 2 * n; ++i)
    {
      maxHeap.push(nums[i]);
      leftSum += nums[i];
      if (maxHeap.size() > n)
      {
        leftSum -= maxHeap.top();
        maxHeap.pop();
      }
      if (maxHeap.size() == n)
      {
        prefixMaxSum[i] = leftSum;
      }
    }

    // suffixMinSum[i]: maximum sum of n smallest elements from nums[i..end]
    vector<long long> suffixMinSum(nums.size(), 0);
    priority_queue<int, vector<int>, greater<int>> minHeap;
    long long rightSum = 0;

    for (int i = nums.size() - 1; i >= n; --i)
    {
      minHeap.push(nums[i]);
      rightSum += nums[i];
      if (minHeap.size() > n)
      {
        rightSum -= minHeap.top();
        minHeap.pop();
      }
      if (minHeap.size() == n)
      {
        suffixMinSum[i] = rightSum;
      }
    }

    // Find minimum difference between prefixMaxSum[i] and suffixMinSum[i + 1]
    long long res = LLONG_MAX;
    for (int i = n - 1; i < 2 * n; ++i)
    {
      res = min(res, prefixMaxSum[i] - suffixMinSum[i + 1]);
    }

    return res;
  }
};