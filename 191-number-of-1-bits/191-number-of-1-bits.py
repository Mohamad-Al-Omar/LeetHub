class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        print(n)
        n = format(n,'b')
        print(n)
        ans = 0
        for i in n:
            ans += int(i)
        return ans
                
        