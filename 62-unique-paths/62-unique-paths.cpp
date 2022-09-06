class Solution {
public:
    int uniquePaths(int n, int m) {
        int arr[n][m];
        for(int i =0;i<m;i++){
            arr[0][i] = 1;
        }
        for(int i = 1;i<n;i++){
            arr[i][0] = 1;
        }
        for(int i =1;i<n;i++){
            for(int j = 1;j<m;j++){
                arr[i][j] = arr[i-1][j]+arr[i][j-1];
            }
        }
        return arr[n-1][m-1];
    }
};