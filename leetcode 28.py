class Solution(object):
    def strStr(self, haystack, needle):
        if(len(needle)==0):
            return 0
        for i in range(len(haystack)):
            if(haystack[i:].startswith(needle)):
                return i
        return -1
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """