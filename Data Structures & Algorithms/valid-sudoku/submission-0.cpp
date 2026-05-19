class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<char> rowCheck;
            unordered_set<char> colCheck;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    auto result = rowCheck.insert(board[i][j]);
                    if (!result.second) {
                        return false;
                    }
                }
                if (board[j][i] != '.') {
                    auto res = colCheck.insert(board[j][i]);
                    if (!res.second) {
                        return false;
                    }
                }
            }
        }

        for (int rowstart=0; rowstart < 9; rowstart+=3) {
            for (int colstart=0; colstart < 9; colstart+=3) {
                unordered_set<int> sqcheck;
                for(int i=0 ;i<3;i++)
                {
                    for (int j=0;j<3;j++)
                    {
                        if(board[rowstart+i][colstart+j]!='.')
                        {
                            auto res = sqcheck.insert(board[rowstart+i][colstart+j]);
                            if(!res.second)
                            {
                                return false;
                            }
                        }
                    }
                }

            }
        }
        return true;
    }
};
