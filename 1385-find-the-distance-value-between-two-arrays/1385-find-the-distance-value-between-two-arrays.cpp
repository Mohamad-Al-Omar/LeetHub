#include<cmath>
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cum[2220]{0};
        for (int i=0;i<arr2.size();i++){
            cum[arr2[i]+1110]++;
        }
        for (int i=1;i<2220;i++){
            cum[i] += cum[i-1];
        }
        int ans=0;
        for (int i=0;i<arr1.size();i++){
            if (cum[arr1[i]+1110-d-1]==cum[arr1[i]+1110+d]){
                ans++;
            }
        }
        return ans;
    }
};