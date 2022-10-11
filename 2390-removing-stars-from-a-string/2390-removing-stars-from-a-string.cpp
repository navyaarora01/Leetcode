class Solution {
public:
//     string removeStars(string s) {
	
//         stack<char> st;
//         for(int i=0;i<s.length();i++){
//             if(!st.empty() && s[i]=='*'){
//                 st.pop();
//                 continue;
//             }
//             st.push(s[i]);
//         }
		
		
//         string ans="";
//         while(st.size()){
//             ans+=st.top();
//             st.pop();
//         }
//         reverse(ans.begin(),ans.end());
		
//         return ans;
//     }
    
    string removeStars(string s) {
        int n = s.size();
        stack<char> st;
        for(int i = 0;i<n;i++){
            if(!st.empty() && s[i] =='*'){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        string ans = "";
        while(st.size()){
            char ele = st.top();
            ans += ele;
            st.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};

