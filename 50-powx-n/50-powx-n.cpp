class Solution {
public:
    double myPow(double x, int N) {
        double ans = 1.0;
        long long n = N;
        if(n<0){
            n=  -1*n;
        }
        while(n){
            if(n%2==1){
                ans = ans*x;
                n = n-1;
            }else{
                x = x*x;
                n = n/2;
            }
        }
        if(N<0){
            ans = (double)1.0/(double) ans;
        }
        return ans;
    }
};