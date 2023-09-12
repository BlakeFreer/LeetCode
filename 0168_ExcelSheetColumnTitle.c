/**
 * @author Blake Freer
 * @date 2023-09-11
**/

char * convertToTitle(int columnNumber){
    int newLetter;
    char* letters = (char *)malloc(sizeof(char) * 9);
    letters[8] = 0;
    int place = 8;
    while (columnNumber > 0) {
        place -= 1;
        newLetter = (columnNumber - 1) % 26;
        letters[place] = newLetter + 'A';
        columnNumber = (columnNumber - 1) / 26;
    }
    return &letters[place];
}