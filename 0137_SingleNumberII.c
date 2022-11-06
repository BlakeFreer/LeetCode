// Author: Blake Freer
// Date Created: November 6, 2022
// Description: Creates an abelian group structure where each element has order three. Then all elements repeated three times will cancel out, leaving just the singleton number
// Creates the group structure by implementing an XOR counter using two 32-bit integers that resets the state every 3 repetitions

int singleNumber(int* nums, int numsSize){
    int main = 0;
    int carry = 0;
    for(int i = 0; i < numsSize; i++){
        main ^= (nums[i] & ~carry);
        carry ^= nums[i] & (carry | ~main);
    }
    return main;
}