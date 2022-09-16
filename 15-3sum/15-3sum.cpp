class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
         sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int n = arr.size();
        set<vector<int>> s;
        for(int i = 0;i<n-2;i++){
            int val = arr[i];
            int l = i+1;
            int r = n-1;
            while(l<r){
                int csum = val+arr[l]+arr[r];
                if(csum==0){
                    s.insert({val , arr[l] , arr[r]});
                    l++;
                    r--;
                }
                else if(csum<0){
                    l++;
                }
                else{
                    r--;
                }
            }
        }for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};