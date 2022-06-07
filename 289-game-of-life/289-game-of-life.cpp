class Solution {
    int x[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int y[8] = {0, 1, 1, 1, 0, -1, -1 , -1};
    int cnt = 0;
    void count1(vector<vector<int>> board, int i, int j, int n, int m){
        if(i<0 || j<0 || i>=n || j>=m )
            return;
        if(board[i][j] == 1){
            cnt++;
            return;
        }     
        if(board[i][j] == 0)
            return;
        
    }
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        int temp[n][m];
        cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cnt = 0;
                 for(int k=0; k<8; k++){
                    count1(board, i+x[k], j+y[k], n, m);
                }
                if(board[i][j] == 1){
                    if(cnt <= 2){
                       temp[i][j] = 0;
                    }
                    if(cnt == 2 || cnt == 3){
                        temp[i][j] = 1;
                    }
                    if(cnt > 3){
                        temp[i][j] = 0;
                    }
                }else{
                    if(cnt  == 3){
                        temp[i][j] = 1;
                    }else
                        temp[i][j] = 0;
                    
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                 board[i][j] = temp[i][j];
            }
        }
        return ;
    }
};