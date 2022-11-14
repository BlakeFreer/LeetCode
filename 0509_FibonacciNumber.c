// Author: Blake Freer
// Date Created: November 14, 2022
// Time: O(n)
// Space: O(1)

int fib(int n){
    int x = 0;
    int y = 1;
    while(n--){
        y = x + y;
        x = y - x;
    }
    return x;
}