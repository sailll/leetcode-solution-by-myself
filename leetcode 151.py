class Solution(object):
    def reverseWords(self, s):
        words=s.split()
        space=' '
        ans=str()
        l=len(words)
        for i in range(l):
            ans+=words[l-i-1]
            if(i<l-1):
                ans+=space
        return ans
        """
        :type s: str
        :rtype: str
        """