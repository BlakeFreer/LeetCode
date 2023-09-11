/**
 * @author Blake Freer
 * @date 2023-09-10
**/

void reverseString(char* s, int sSize){
    // Copied from 0344 - ReverseString
    char temp;
    for(int i = 0; i < sSize/2; i++){
        temp = s[sSize-i-1];
        s[sSize-i-1] = s[i];
        s[i] = temp;
    }
}

char * reverseStr(char * s, int k){
    int len = strlen(s);
    for(int i = 0; i < len; i+=2*k){
        if(i+k > len-1) k=len-i;
        reverseString(&s[i], k);
    }
    return s;
}