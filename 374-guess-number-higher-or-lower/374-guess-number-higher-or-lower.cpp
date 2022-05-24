/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        cout<<"Test";
        long int l=1, r=2147483647, m;
        while(l<=r){
            m = (l+r)/2;
            int ans = guess(m);
            if (ans == 0) return m;
            else if (ans == -1) r = m - 1;
            else l = m + 1;
        }
        return -1;
    }
};