class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lmax(n);
        int ans = 0;
        lmax[0]  = height[0];
        for(int i = 1;i<n;i++){
            lmax [i] = max(height[i] ,lmax[i-1] );
        }
        vector<int> rmax(n);
        rmax[n-1] = height[n-1];
        for(int i = n-2 ; i>=0;i--){
            rmax[i] = max(height[i] , rmax[i+1]);
        }
        
        for(int i = 1;i<n-1;i++){
            ans +=  min(rmax[i] , lmax[i])- height[i];
        }
        return ans;
    }
};



// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int size=height.size();
        
//         vector<int> maxLeft(size);
//         maxLeft[0]=height[0];
//         for(int i=1;i<size;i++)
//             maxLeft[i]=max(maxLeft[i-1],height[i]);
        
//         vector<int> maxRight(size);
//         maxRight[size-1]=height[size-1];
//         for(int i=size-2;i>=0;i--) 
//             maxRight[i]=max(maxRight[i+1],height[i]);
//         //reverse(maxRight.begin(),maxRight.end()); ------> No need to reverse
        
//         vector<int> water(size);
//         for(int i=0;i<size;i++)
//             water[i] = min(maxLeft[i],maxRight[i]) - height[i];
        
//         int sum=0;
//         for(int i=0;i<size;i++)
//             sum = sum + water[i];
        
//         return sum;
//     }
// };







// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int l = 0, r = height.size() - 1, water = 0, minHeight = 0;
//         while (l < r) {
//             while (l < r && height[l] <= minHeight) {
//                 water += minHeight - height[l++];
//             }
//             while (l < r && height[r] <= minHeight) {
//                 water += minHeight - height[r--];
//             }
//             minHeight = min(height[l], height[r]);
//         }
//         return water;
//     }
// };