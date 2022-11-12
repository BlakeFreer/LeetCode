// Author: Blake Freer
// Date Created: November 12, 2022
// Time Complexity: O(m*n), m=#rows, n=#columns
// Space Complexity: O(1)

int minPrev(int** grid, int row, int col){
    int L = (col)?grid[row][col-1]:1000;
    int U = (row)?grid[row-1][col]:1000;
    return (row||col)?((L<U)?L:U):0;
}

int minPathSum(int** grid, int gridSize, int* gridColSize){
    for(int r = 0; r < gridSize; r++){
        for(int c = 0; c < gridColSize[r]; c++){
            grid[r][c]+=minPrev(grid, r, c);
        }
    }
    return grid[gridSize-1][gridColSize[0]-1];
}