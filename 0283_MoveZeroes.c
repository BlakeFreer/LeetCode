/**
 * @author Blake Freer
 * @date 2023-09-11
**/

void swap(int* nums, int idxA, int idxB){
    printf("Swapping %d, %d\n", idxA, idxB);
    int temp = nums[idxA];
    nums[idxA] = nums[idxB];
    nums[idxB] = temp;
}

void moveZeroes(int* nums, int numsSize){
    int lzi = 0; // least zero index
    int idx;
    while(lzi < numsSize){
        idx = lzi;
        while(idx < numsSize && nums[idx] == 0){
            idx += 1;
        }
        if(idx < numsSize){
            swap(nums, lzi, idx);
        }
        lzi++;
    }
}