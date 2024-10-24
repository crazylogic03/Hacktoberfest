//Title: Maximum Subarray Sum

//Description:
//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.


#include <vector>
#include <algorithm>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }
    
    return maxSum;
}
