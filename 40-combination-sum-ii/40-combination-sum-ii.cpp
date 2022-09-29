class Solution {
public:
     vector<vector<int>> ans;
    void findCombination(int ind , int target , vector<int> &temp , vector<int>& arr){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        for(int i = ind ; i<arr.size() ; i++){
            if(i>ind && arr[i] == arr[i-1])continue;
            if(arr[i]>target)break;
            temp.push_back(arr[i]);
            findCombination(i+1 , target-arr[i]  , temp ,arr );
            temp.pop_back();
        }
       
    }
   
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin() , arr.end());
        vector<int> temp;
        findCombination(0 , target , temp , arr);
        
        return ans;
    }
};