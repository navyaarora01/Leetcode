class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       priority_queue<pair <int,int>  , vector<pair<int,int>> , greater <pair<int,int>>>pq;
        for(auto ele : arr){
            pq.push(make_pair(abs(x-ele), ele));
          
        }
        vector<int> ans;
        int i=1;
        while(!pq.empty() &&i<=k){
            pair<int,int> temp = pq.top();
            pq.pop();
            ans.push_back(temp.second);
            i++;
        }
        
        
        sort(ans.begin() , ans.end());
        return ans;
        
    }
};