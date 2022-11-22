// Author: Blake Freer
// Date Created: November 22, 2022
// Time: O(n) (1 pass through array)
// Space: O(1)

int missingNumber(int* nums, int numsSize){
    int xor = numsSize;
    for(int i = 0; i < numsSize; i++){
        xor = xor ^ nums[i] ^ i;
    }
    return xor;
}