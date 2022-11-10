// Author: Blake Freer
// Date Created: November 10, 2022
// Runtime: 0ms - faster than 100% of submissions
// Memory: no memory is allocated

bool isSubsequence(char * s, char * t){
    while(*s && *t){
        if(*s == *t){
            s++;
        }
        t++;
    }
    return !(*s);
}