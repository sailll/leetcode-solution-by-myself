class Solution(object):
    def dfs(self, cur, target, graph):
        ans = []
        for c in graph[cur]:
            if c == target:
                ans.append([cur, target])
            else:
                cur_level = self.dfs(c, target, graph)
                if len(cur_level):
                    ans += [[cur]+x for x in cur_level]
        return ans
    
    def allPathsSourceTarget(self, graph):
        n = len(graph)
        return self.dfs(0, n-1, graph)
