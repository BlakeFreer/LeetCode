// Author: Blake Freer
// Date Created: November 8, 2022
// Runtime - 0ms - faster than 100% of submissions
// Memory - 5.8 MB - less than 97% of submissions

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    *returnSize = digitsSize;
    digits[digitsSize-1] += 1;
    if(digits[digitsSize-1] < 10) return digits;

    int carry = 1;
    int d = digitsSize - 1;
    digits[d] %= 10;
    while(carry && d > 0){
        d--;
        digits[d] += 1;
        carry = digits[d] >= 10;
        digits[d] %= 10;
    }
    if(d==0 && carry == 1){
        int * output = (int *)malloc(sizeof(int)*(digitsSize + 1));
        output[0] = 1;
        for(int i = 0; i < digitsSize; i++){
            output[i+1] = digits[i];
        }
        *returnSize += 1;
        return output;
    } else {
        return digits;
    }
}