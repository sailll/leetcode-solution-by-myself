class Solution(object):
    def shortestDistanceColor(self, colors, queries):
        r_map = {}
        for c in range(len(colors)):
            if colors[c] not in r_map:
                r_map[colors[c]] = []
            r_map[colors[c]].append(c)
        ans = []
        print r_map
        for index,color in queries:
            if color not in r_map:
                ans.append(-1)
                continue
            dis = 50000
            start = 0
            end = len(r_map[color])-1
            mid = (start+end)/2
            while(start <= end):
                mid = (start+end)/2
                if r_map[color][mid] < index:
                    start = mid+1
                else:
                    end = mid -1
            ans.append(min(min(abs(r_map[color][max(0,mid-1)] - index),abs(r_map[color][mid]-index)),abs(r_map[color][min(mid+1,len(r_map[color])-1)]-index)))
        return ans
                
        """
        :type colors: List[int]
        :type queries: List[List[int]]
        :rtype: List[int]
        """
        