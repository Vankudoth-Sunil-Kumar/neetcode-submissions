class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        bool rows[9][9]={false};
        bool cols[9][9]={false};
        bool boxes[9][9]={false};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.') continue;
                int digit=board[i][j]-'1';
                int box=(i/3)*3+j/3;
                if(rows[i][digit] || cols[j][digit] || boxes[box][digit]) return false;
                rows[i][digit]=true;
                 cols[j][digit]=true;
                 boxes[box][digit]=true;
            }
        }
        return true;
    }
};
