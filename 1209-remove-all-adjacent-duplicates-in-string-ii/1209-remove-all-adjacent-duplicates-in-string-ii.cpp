class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char , int>> st;
        int n = s.size();
        for(int i = 0;i<n;i++){
            if(st.size() == 0 || st.back().first !=s[i]){
                st.push_back({s[i] , 1});
            }
            else{
                st.back().second++;
            }
            
            if(st.back().second == k){
                st.pop_back();
            }
        }
        string ans = "";
        for(auto x : st){
            char ele = x.first;
            for(int  i = 0 ;i<x.second;i++){
                ans += ele;
            }
            
            
        }
        return ans;
    }
};