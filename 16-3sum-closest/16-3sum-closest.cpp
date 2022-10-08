class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int temp = INT_MAX, ans;
        for(int i = 0;i < n; i++){
            int left = i + 1, right = n - 1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(temp > abs(target - sum)){
                    temp = abs(target - sum);
                    ans = sum;
                }
                if(sum < target)    left++;
                else if(sum == target)   return sum;
                else    right--;
            }
        }
        return ans;
    }
};