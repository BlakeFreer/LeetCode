// Author: Blake Freer
// Date Created: November 20, 2022
// Time: O(n)
// Space: O(1)

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    for(int i = 1; i < numsSize; i++){
        nums[i] += nums[i-1];
    }
    *returnSize = numsSize;
    return nums;
}