// Author: Blake Freer
// Date Created: November 15, 2022
// Time: O(n) where n = length of equation
// Space: O(1)

char * solveEquation(char * eq){
    int x = 0;
    int ones = 0;
    int curCoeff = 0;
    int coeffExists = 0;
    int sign = 1;
    int direction = 1;
    // Parse Equation
    while(*eq){
        if(48 <= *eq && *eq < 58){
            curCoeff = curCoeff * 10 + (*eq - 48);
            coeffExists = 1;
        } else if (*eq == 'x'){
            x += sign*direction*((coeffExists)?curCoeff:1);
            curCoeff = 0;
            coeffExists = 0;
        } else if (*eq == '+' || *eq == '-'){
            ones += curCoeff * sign * direction;
            sign = (*eq == '-')?-1:1;
            curCoeff = 0;
            coeffExists = 0;
        }
        if (*eq == '=' || !*(eq+1)){
            ones += curCoeff* sign * direction;
            curCoeff = 0;
            coeffExists = 0;
            direction = -1;
            sign = 1;
        }
        eq++;
    }
    // Construct Output
    char * output = (char*)malloc(sizeof(char) * 19);
    if (x){
        if (ones){
            sprintf(output, "x=%d", -ones/x);
        } else {
            sprintf(output, "x=0");
        }
    } else {
        if (ones){
            sprintf(output, "No solution");
        } else {
            sprintf(output, "Infinite solutions");
        }
    }
    // sprintf(output,"%dx + %d=0",x, ones);
    return output;
}