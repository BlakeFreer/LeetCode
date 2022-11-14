// Author: Blake Freer
// Date Created: November 13, 2022
// Time: O(1)
// Memory: O(1)

int smallestEvenMultiple(int n){
    return (n&1)?2*n:n;
}