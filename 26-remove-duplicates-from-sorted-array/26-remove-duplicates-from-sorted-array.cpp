class Solution {
public:
    int removeDuplicates(vector<int>&nums) {
  //       int n = arr.size();
  //        set < int > set;
  // for (int i = 0; i < n; i++) {
  //   set.insert(arr[i]);
  // }
  // int k = set.size();
  // int j = 0;
  // for (int x: set) {
  //   arr[j++] = x;
  // }
  // return k;
        
        
        
        
        
        
        
        
        
        
        int n = nums.size();
        set<int> s;
        for(auto x: nums){
            s.insert(x);
            // count++;
            
        }
        nums.clear();
        int i=0;
        for(int x:s){
            // cout<<x<<endl;
            nums.push_back(x);
        }
        return s.size();
    }
};