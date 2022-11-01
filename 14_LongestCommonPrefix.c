// Author: Blake Freer
// Date: November 1, 2022
// Runtime: 3ms - Faster than 70.11% of C submissions
// Memory Usage: 5.7 MB Less than 95.06% of C submissions

int maxLen(char ** strs, int strsSize){
    int len = 0;
    while(1){
        if(strs[0][len] == '\0'){
            return len;
        }
        for(int i = 1; i < strsSize; i++){
            if(strs[i][len] == '\0'){
                return len;
            }
            if (strs[i][len] - strs[0][len]){
                return len;
            }
        }
        len = len + 1;
    }
}

char * longestCommonPrefix(char ** strs, int strsSize){
    strs[0][maxLen(strs,strsSize)] = '\0';
    return strs[0];
}