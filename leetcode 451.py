class Solution(object):
    def frequencySort(self, s):
        d = {}
        for i in s:
            d[i] = d.get(i,0) + 1
        l = sorted(d.items(), lambda x, y: cmp(x[1], y[1]), reverse=True)
        ans = ""
        for i in l:
            ans += i[0]*i[1]
        return ans
        
        """