class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=1,r=arr.size()-2,m;
        while(l<=r){
            m = (l+r)/2;
            if (arr[m-1]< arr[m] && arr[m]> arr[m+1]){
                return m;
            }
            else if (arr[m-1]< arr[m] && arr[m]< arr[m+1]){
                l = m+1;
            }else{
                r = m-1;
            }
        }
        return -1;
    }
};