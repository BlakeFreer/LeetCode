/**
 * @author Blake Freer
 * @date 2023-09-10
 * @brief 344
**/

void reverseString(char* s, int sSize){
    char temp;
    for(int i = 0; i < sSize/2; i++){
        temp = s[sSize-i-1];
        s[sSize-i-1] = s[i];
        s[i] = temp;
    }
}