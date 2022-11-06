// Author: Blake Freer
// Date Created: November 6, 2022
// Uses the group of binary integers and the commutativity and self-inverting of the XOR operation to linearly calculate the output

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findArray(int* pref, int prefSize, int* returnSize){
    int* output = malloc(sizeof(int) * prefSize);
    output[0] = pref[0];
    for(int i = 1; i < prefSize; i++){
        output[i] = pref[i-1]^pref[i];
    }

    (*returnSize) = prefSize;
    return output;
}