class Solution(object):
    def longestCommonPrefix(self, strs):
        tmp=str()
        ans=str()
        if(len(strs)==0 or len(strs[0])==0):
            return ans
        for i in range(0,len(strs[0])):
            ans=tmp
            tmp+=strs[0][i]
            for j in range(0,len(strs)):
                if(not strs[j].startswith(tmp)):
                    return ans
        ans=tmp
        return ans      
            
        """
        :type strs: List[str]
        :rtype: str
        """