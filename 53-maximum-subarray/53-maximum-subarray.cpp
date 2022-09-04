class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int curr = 0;
        for(int i = 0;i<nums.size();i++){
            curr += nums[i];
            curr  = max(nums[i] ,curr ); 
            if(curr<nums[i]){
                curr = nums[i];
            }
            if(maxSum<curr){
                maxSum  = curr;
            }
            // if(curr<0){
            //     curr = 0;
            // }
           
        }
        return maxSum;
    }
};