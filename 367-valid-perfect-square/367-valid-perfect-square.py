class Solution(object):
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        return int(sqrt(num))*int(sqrt(num))==num
        