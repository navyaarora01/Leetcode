class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        int ans;
        for(auto x: nums){
            if(uset.find(x) == uset.end()){
                uset.insert(x);
            }
            else{
                ans = x;
            }
              
            
        }
        return ans;
    }
};