// Author: Blake Freer
// Date Created: November 9, 2022
// Method: Takes the XOR over all letters in s and t. Repeated characters cancel out leaving just the extra character in t

char findTheDifference(char * s, char * t){
    char xor = 0;
    while(*s){
        xor ^= *s;
        s++;
    }
    while(*t){
        xor ^= *t;
        t++;
    }
    return xor;
}