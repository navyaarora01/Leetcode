class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0;
        for(int i=0; i<colors.size()-1; i++){
            int sum = 0;
            int temp = INT_MIN;
            while(colors[i]==colors[i+1] && i<colors.size()-1){
                temp = max(neededTime[i], temp);
                sum+=neededTime[i];
                i++;
            }
            sum+=neededTime[i];
            temp = max(temp, neededTime[i]);
            sum-=temp;
            cout<<sum<<" ";
            ans+=sum;
        }
        return ans;
    }
};
