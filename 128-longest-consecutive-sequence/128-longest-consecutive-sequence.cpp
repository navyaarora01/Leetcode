class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset;
        for(auto x: nums){
            uset.insert(x);
        }
        int ans = 0;
        for(int i = 0;i<nums.size();i++){
            if(uset.find(nums[i]-1)!=uset.end()){       //if prensent then move on
                continue;
            }
            else{
                int count = 0;
                int curr = nums[i];
                while(uset.find(curr)!=uset.end()){
                    
                    count++;
                    curr++;
                }
                    ans = max(ans,count);
                
            }
        }
        
        
        
        
        return ans;
    }
};