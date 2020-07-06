class Solution(object):
    orders = []
    cycle = False
    def dfs(self,visit, cur, graph):
        visit[cur] = 1
        for c in graph[cur]:
            if visit[c] == 0:
                self.dfs(visit, c, graph)
            if visit[c] == 1:
                self.cycle = True
                return  
        visit[cur] = 2
        self.orders.append(cur)
        
    def alienOrder(self, words):
        graph = {}
        visit = {}
        self.orders = []
        t_string = ''.join(words)
        t_char = set(t_string)
        for c in t_char:
            graph[c] = []
            visit[c] = 0
            
        for i in range(len(words)-1):
            if len(words[i]) > len(words[i+1]) and words[i+1] == words[i][:len(words[i+1])]:
                return ""
            for j in range(min(len(words[i]),len(words[i+1]))):
                if words[i][j] != words[i+1][j]:
                    graph[words[i][j]].append(words[i+1][j])
                    break
        print graph
        for k in graph.keys():
            if visit[k] == 0:
                self.dfs(visit, k, graph)
        if self.cycle == False:
            return ''.join(self.orders[::-1])
        else:
            return ''
        
        
                    
        """
        :type words: List[str]
        :rtype: str
        """
        