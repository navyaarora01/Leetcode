class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& prop) {
        int n = prop.size();
        sort(prop.begin() , prop.end() , [&](vector<int> &a , vector<int> &b){
            if(a[0]==b[0]){
                return a[1]>b[1];
            }
            return a[0]<b[0];
        });
        
        int maxDef = INT_MIN;
        int ans = 0;
        for(int i = n-1;i>=0;i--){
            if(prop[i][1]<maxDef){
                ans++;
            }
            maxDef = max(maxDef , prop[i][1]);
        }
        return ans;
    }
};