// Author: Blake Freer
// Date Created: November 4, 2022
// Time Complexity: O(n);
// Space Complexity: O(1)

int removeDuplicates(int* nums, int numsSize){
    int index = 0;
    for(int i = 1; i < numsSize; i++){
        if(nums[i] != nums[index]){
            index++;
            nums[index] = nums[i];
        }
    }
    return index + 1;
}