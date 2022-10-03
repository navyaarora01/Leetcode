class Solution {
public:
    //checks whether point exists or not
    bool inBound(int i , int j , int n){
        if(i<0 || j<0 || i>=n|| j>=n){
            return false;
        }
        return true;
    }
    
    bool isSafe(int r , int c , vector<string>temp , int n){
        //for checking adjacent rows and columns
        for(int i=0;i<n;i++){
            if(temp[i][c] == 'Q' || temp[r][i] == 'Q'){
                return false;
            }
        }
        //for checking diagnols
        for(int i=0;i<n;i++){
            if(inBound(r-i , c-i , n) && temp[r-i][c-i] == 'Q')return false;
            if(inBound(r-i , c+i , n) && temp[r-i][c+i] == 'Q')return false;
            if(inBound(r+i , c-i , n) && temp[r+i][c-i] == 'Q')return false;
            if(inBound(r+i , c+i , n) && temp[r+i][c+i] == 'Q')return false;
        }
        return true;
        
    }
    void nQueens(vector<string>temp , int n , int row){
        if(row == n){
            ans.push_back(temp);    // main base condition for rec funcn
            return;
        }
        
        for(int i = 0; i<n;i++){
        //isSafe func checks whether the queen can be placed there or not    
            if(isSafe(row, i  , temp , n)){      
                temp[row][i] = 'Q';
                nQueens(temp , n , row+1);
                temp[row][i] = '.';
            }
        }
    }
    
    vector<vector<string>> ans;
    vector<vector<string>> solveNQueens(int n) {
        vector<string> temp(n," ");
        string s(n,'.');
        for(int i = 0;i<n;i++){
            // for(int j = 0;j<n;j++){
                temp[i]=s;
            // }

        }
        
        nQueens(temp , n , 0);      // 0 is for the row we currently are at
        return ans;
    }
};