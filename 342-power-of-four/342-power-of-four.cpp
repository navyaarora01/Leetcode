class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==INT_MIN)
            return false;
        if((n & (n-1))==0 && (n%3 == 1)){
            return true;
        }
        return false;
    }
};