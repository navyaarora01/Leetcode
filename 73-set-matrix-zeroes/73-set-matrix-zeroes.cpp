class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int r = a.size();
        int c = a[0].size();
          vector<pair<int,int>> one;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==0){
                one.push_back({i,j});
            }
        }
    }
    
    for(auto d:one){
        if(a[d.first][d.second]==0){
            for(int i=0;i<c;i++){
                a[d.first][i]=0;
            }
            for(int i=0;i<r;i++){
                a[i][d.second]=0;
            }
        }
    }
    
    }
};