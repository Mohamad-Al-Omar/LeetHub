
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0,count=0;
        int index[300]{0};
        for (int i=0,j=0;j<s.length();){
            if (index[s[j]]==1){
                index[s[i]]--;
                count--;
                i++;
            }else{
                index[s[j]]++;
                count++;
                j++;
                ans = count>ans?count:ans;
            }
        }
        return ans;
    }
};