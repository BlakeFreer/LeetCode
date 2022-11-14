// Author: Blake Freer
// Date Created: November 13, 2022
// Time: O(n)
// Space: O(1)

int gcd(int x, int y){
    if(x==0){
        return y;
    }
    return gcd(y % x, x);
}

int findGCD(int* nums, int numsSize){
    int min = 100000;
    int max = -100000;
    for(int i = 0; i < numsSize; i++){
        min = (nums[i]<min)?nums[i]:min;
        max = (nums[i]>max)?nums[i]:max;
    }
    return gcd(min, max);
}