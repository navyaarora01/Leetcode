class Solution {
public:
    void subset(int i , vector<int> temp,vector<int>& nums,vector<vector<int>>& ans){
        if(i == nums.size()){
            ans.push_back(temp);
            return;
        }
        subset(i+1 , temp , nums , ans);
        temp.push_back(nums[i]);
        subset(i+1 , temp,nums ,ans );
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subset(0 , temp , nums , ans);
        return ans;
    }
};