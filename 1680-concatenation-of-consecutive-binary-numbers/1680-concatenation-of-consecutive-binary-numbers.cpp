class Solution {
public:
    int concatenatedBinary(int n) {
        long long int val = 0;
        int i = 1;
        while(i<=n){
            val = ((val<<(int(log2(i)+1)))%1000000007 +i)%1000000007;
            i++;
        }
        return val;
    }
};