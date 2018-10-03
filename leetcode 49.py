class Solution(object):
    def groupAnagrams(self, strs):
        l = []
        ans = []
        for s in strs:
            d = sorted(s)
            if d in l:
                ans[l.index(d)].append(s)
            else:
                l.append(d)
                ans.append([])
                ans[-1].append(s)
        return ans
                
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """