class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
       unordered_map<int,int> umap;
        for(auto x : nums){
            umap[x]++;
        }
        vector<int> ans;
        for(auto x : umap){
            if(x.second >n/3){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};