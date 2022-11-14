// Author: Blake Freer
// Date Created: November 14, 2022
// Time: O(n)
// Space: O(1)

int lengthOfLastWord(char * s){
    int cur = 0;
    while(*s){
        if(*s != 32){
            cur++;
        } else {
            if(*(s+1) && *(s+1) != 32){
                cur = 0;
            }
        }
        s++;
    }
    return cur;
}