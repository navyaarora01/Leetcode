class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin() , tokens.end());
        int score = 0;
        int ans = 0;
        int i = 0;
        int j = tokens.size()-1;
        while(i<=j){
            if(tokens[i]<=power){
                score +=1;
                ans = max(ans, score);
                power = power - tokens[i];
                i++;
            }else if(score>0){
            power = power+ tokens[j];
            score -= 1;
            j--;
        }
        else{
            break;
        }
            
        }
        return ans;
    }
};