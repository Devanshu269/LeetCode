class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int N = matrix.size();
        int M = matrix[0].size();
        int i=0, j=M-1;
        while(i<N && j>=0){
            int temp = matrix[i][j];
            if(temp ==target){
                return true;
            }
            if(temp>target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};
