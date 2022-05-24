class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,m,ans = nums.size();
        while (l<=r){
            m = (l+r)/2;
            if (nums[m]>=target){
                ans = m;
                r = m -1;
            }else{
                l = m + 1;
            }
        }
        return ans;
    }
};