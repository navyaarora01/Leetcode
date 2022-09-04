class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size()-1;
        int infpt = 0;
        for(int i = n;i>0;i--){
            if(nums[i]>nums[i-1]){
                infpt = i;
                break;
            }
        }
        if(infpt == 0){
            sort(nums.begin() , nums.end());
        }
        else{
            int min = INT_MAX;
            int swapNo = nums[infpt - 1];
            for(int i = infpt ; i<=n ; i++){
                if(nums[i]- swapNo>0 && nums[i] - swapNo<min){
                    swap(nums[infpt - 1] , nums[i]);   
                }
            }
            sort(nums.begin()+infpt , nums.end());
        }
    }
};