// Author: Blake Freer
// Date Created: November 2, 2022
// Runtime: 0ms - Faster than 100% of submissions

bool hasAlternatingBits(int n){
    uint x = n ^ (n>>1);
    return !(x & (x+1));
}