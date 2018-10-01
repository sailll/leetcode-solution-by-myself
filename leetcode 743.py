class Solution(object):
    def networkDelayTime(self, times, N, K):
        maxn = 9999999
        dis = [maxn] * (N+1)
        dis[K] = 0
        map = dict()
        for i in range(1,N+1):
            map[i] = []
        for time in times:
            map[time[0]].append([time[1], time[2]])
        q = range(1, N+1)
        while(len(q)>0):
            m = min([dis[i] for i in q])
            c = 0
            for i in q:
                if dis[i] == m:
                    c = i
            q.remove(c)
            for e in map[c]:
                if dis[e[0]] > dis[c] + e[1]:
                    dis[e[0]] = dis[c] + e[1]
        ans = max(dis[1:])
        if ans==maxn:
            ans = -1
        return ans
            
        """
        :type times: List[List[int]]
        :type N: int
        :type K: int
        :rtype: int
        """
        