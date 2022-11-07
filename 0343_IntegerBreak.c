// Author: Blake Freer
// Date Created: November 7, 2022

int integerBreak(int n){
    if(n < 4) return n-1;
    int k = 1;
    while(n>4){
        n-=3;
        k *= 3;
    }
    k *= n;
    return k;
}