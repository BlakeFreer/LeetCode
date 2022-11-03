// Author: Blake Freer
// Date Created: November 2, 2022
// Runtime: 0ms (Top 0%)


// Answer follows the fibbonacci sequence
int climbStairs(int n){
    int x = 0;
    int y = 1;
    while(n--){
        y = x + y;
        x = y - x;
    }
    return y;
}