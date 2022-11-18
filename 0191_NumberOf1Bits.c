// Author: Blake Freer
// Date Created: November 16, 2022
// Time: O(n) where n is length of number (in bits)
// Space: O(1)

int hammingWeight(uint32_t n) {
    int x = 0;
    while(n){
        x += n&1;
        n=n>>1;
    }
    return x;
}