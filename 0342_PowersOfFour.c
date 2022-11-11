// Author: Blake Freer
// Date Created: November 11, 2022

bool isPowerOfFour(int n){
    while(n){
        if(!(n^1)) return true;
        if(n&3) return false;
        n = n>>2;
    }
    return false;
}