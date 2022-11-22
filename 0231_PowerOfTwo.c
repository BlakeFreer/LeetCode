// Author: Blake Freer
// Date Created: November 21, 2022
// Time: O(1)
// Space: O(1)

bool isPowerOfTwo(int n){
    return n > 0 && (n & (-n)) > n>>1;
}