/**
 * @author Blake Freer
 * @date 2023-09-11
**/

int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridSize, int* obstacleGridColSize){
    // Pascal's triangle style solution
    int y;
    int x;
    if(obstacleGrid[0][0] == 1){
        return 0;
    }
    for(y = 0; y < obstacleGridSize; y++){
        for(x = 0; x < obstacleGridColSize[y]; x++){
            if(y==0 && x==0){
                obstacleGrid[y][x] = 1;
                continue;
            }
            if(obstacleGrid[y][x] == 1){
                obstacleGrid[y][x] = 0;
                continue;
            }
            if(y != 0){
                obstacleGrid[y][x] += obstacleGrid[y-1][x];
            }
            if(x != 0){
                obstacleGrid[y][x] += obstacleGrid[y][x-1];
            }
        }
    }
    return obstacleGrid[y-1][x-1];
}