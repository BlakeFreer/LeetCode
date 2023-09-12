/**
 * @author Blake Freer
 * @date 2023-09-11
**/

#include<stdbool.h>

int lin2mat(int idx, int** matrix, int numCols){
    // Convert linear index to matrix value
    return matrix[idx / numCols][idx % numCols];
}

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    // Perform a regular binary search, indexing into matrix as needed
    int numCols = matrixColSize[0];
    int iHigh = matrixSize * numCols - 1;
    int iLow = 0;
    if (iHigh == 0){
        return matrix[0][0] == target;
    }
    int idx;
    int diff;
    while(iLow < iHigh){
        idx = (iLow+iHigh)/2;
        diff = lin2mat(idx, matrix, numCols) - target;
        if(diff == 0){
            return true;
        } else if (diff < 0){
            iLow = idx+1;
        } else {
            iHigh = idx;
        }
        if(iLow == iHigh){
            return lin2mat(iLow, matrix, numCols) == target;
        }
    }
    return false;
}