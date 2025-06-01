//Lemoel

bool exist(char** board, int boardSize, int* boardColSize, char* word) {
    for(int i = 0; i < boardSize; i++){
        for(int y = 0; y < *boardColSize; y++){
            if(board[i][y] == word[i]){
                return true;
            }
        }
    }
    return false;
}