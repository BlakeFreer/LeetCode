/**
 * @author Blake Freer
 * @date 2023-09-11
**/

#include<stdbool.h>

bool isAnagram(char * s, char * t){
    // Tracks frequency of each letter in each string
    int* freq = calloc(26, sizeof(int));
    int idx = 0;
    while(s[idx] && t[idx]){
        freq[s[idx] - 'a'] += 1; 
        freq[t[idx] - 'a'] -= 1;
        idx += 1;
    }
    if(s[idx] != t[idx]) {
        // strings different length
        return false;
    }
    for(int i = 0; i < 26; i++){
        if(freq[i]) return false;
    }
    return true;
}