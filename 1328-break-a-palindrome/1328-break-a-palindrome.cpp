class Solution {
public:
    string breakPalindrome(string pallindrome) {
        int n = pallindrome.size();
        if(n<=1){
            return "";
        }
        for(int i=0;i<n/2;i++){
            if(pallindrome[i]!='a'){
                pallindrome[i]='a';
                return pallindrome;
            }
        }
        pallindrome[n-1] = 'b';
        return pallindrome;
    }
};