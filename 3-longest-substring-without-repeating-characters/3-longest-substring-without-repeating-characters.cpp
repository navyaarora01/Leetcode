class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        set<char> Set;
        int ans = 0;
        int start = 0;
        int end = 0;
        
        while(start < n){
            if(Set.find(s[start]) == Set.end()){
                ans = max((start-end+1) , ans);
                Set.insert(s[start]);
                start++;
                
            }else{
                Set.erase(s[end]);
                end++;
            }
        }
        return ans;
    }
};