// place a number at the position
// make recursion
// if col >= 9 make rec with row = row+1 and col = 0
// using for loop check 1 to 9 numbers
// if something went wrong return back
//     erase the number position where u placed previously
// else continue

class Solution {
public:
    
    bool isSafe(vector<vector<char>>& board, int row, int col, int i){
        char s = char(i+'0');
        
        // checking row
        for(int j=0;j<9;j++){
            if(board[row][j] == s) return false;
        }
        
        // checking col
        for(int j=0;j<9;j++){
            if(board[j][col] == s) return false;
        }
        
        // checking sub box
        int r = (row/3)*3, c = (col/3)*3;
        for(int x=0;x<3;x++){
            for(int y=0;y<3;y++){
                if(board[x+r][y+c] == s) return false;
            }
        }
        
        return true;
    }
    
    
    bool solve(vector<vector<char>>& board, int row, int col){
        if(row == 9) return true;
        if(col == 9) return solve(board,row+1,0);
        
        if(board[row][col] != '.') return solve(board, row,col+1);
        
        for(int i=1;i<=9;i++){
            if(isSafe(board, row, col, i)){
                board[row][col] = char(i+'0');
                if(solve(board,row,col+1)) return true;
                board[row][col] = '.';
            }   
        }
        return false;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);
    }
};