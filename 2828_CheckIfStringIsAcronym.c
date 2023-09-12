/**
 * @author Blake Freer
 * @date 2023-09-11
**/

#include<stdbool.h>

bool isAcronym(char ** words, int wordsSize, char * s){
    int i;
    // Check first letter of each word against s
    for(i = 0; i < wordsSize; i++){
        if (words[i][0] != s[i]){
            return false;
        }
    }
    // Return true as long as s has no more letters
    return s[i] == 0;
}