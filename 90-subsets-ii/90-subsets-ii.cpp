class Solution {
public:
        void subset(int i , vector<int> temp,vector<int>& nums,set<vector<int>> &st){
        if(i == nums.size()){
            sort(temp.begin(), temp.end());
            st.insert(temp);
            return;
        }
        subset(i+1 , temp , nums ,st);
        temp.push_back(nums[i]);
        subset(i+1 , temp,nums ,st);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
       set <vector<int>> st;
        subset(0 , temp , nums , st);
        for(auto x : st){
            ans.push_back(x);
        }
        return ans;
    }
   
};