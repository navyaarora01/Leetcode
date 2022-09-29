class Solution {
public:
     vector<vector<int>> ans;
    void findCombination(int i , int target , vector<int> &temp , vector<int>& arr){
        if( i == arr.size()){
            if(target == 0){
                ans.push_back(temp);
            }
            return;
        }
        
        //pickup the element
        
        if(arr[i]<=target){
            temp.push_back(arr[i]);
            findCombination(i , target - arr[i] , temp ,arr );
            temp.pop_back();
        }
       findCombination(i+1 , target  , temp ,arr );
    }
   
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> temp;
        findCombination(0 , target , temp , arr);
        
        return ans;
    }
};