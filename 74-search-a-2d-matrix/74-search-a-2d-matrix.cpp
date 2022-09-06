class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int x) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0;int j = m-1;
        while(i>=0 && i<n && j>=0 && j<m){
            if(matrix[i][j]==x){
                return true;
            }
            else if(matrix[i][j]>x){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};