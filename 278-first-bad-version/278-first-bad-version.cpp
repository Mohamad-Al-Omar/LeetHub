// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int l=0,r=n,m,ans;
        while(l<=r){
            m = (l+r)/2;
            if (isBadVersion(m)) {
                ans = m;
                r = m - 1;
            }else{
                l = m + 1;
            }
        }
        return ans;
    }
};