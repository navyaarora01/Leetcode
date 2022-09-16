class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();
         set < int > set;
  for (int i = 0; i < n; i++) {
    set.insert(arr[i]);
  }
  int k = set.size();
  int j = 0;
  for (int x: set) {
    arr[j++] = x;
  }
  return k;
        
        
        
        
        
        
        
        
        
        
        
//         set<int> s;
//         int count=0;
//         for(auto x: nums){
//             s.insert(x);
//             count++;
            
//         }
//         nums.clear();
//         for(auto x:s){
//             // cout<<x<<endl;
//             nums.push_back(x);
//         }
//         // cout<<nums[0]<<endl;
//         cout<<nums[1]<<endl;
//         cout<<nums[2]<<endl;
//         return count;
    }
};