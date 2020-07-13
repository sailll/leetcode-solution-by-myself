class Solution(object):
    flag = True
    def sequenceReconstruction(self, org, seqs):
        n = len(org)
        graph = {}
        for seq in seqs:
            if len(seq) == 1 and seq[0] not in graph:
                graph[seq[0]] = []
            for i in range(len(seq)-1):
                if seq[i+1] not in graph:
                    graph[seq[i+1]] = []
                if not seq[i] in graph[seq[i+1]]: 
                    graph[seq[i+1]].append(seq[i])
        if len(graph) == 0:
            return False
        visit = [0] * (n+1)
        order = []
        for k in graph.keys():
            if k > n or k < 0:
                return False
        for i in range(1,n+1):
            if visit[i] == 0:
                self.dfs(i,graph, visit, order)
        if self.flag == False:
            return self.flag
        print order
        for i in range(len(order)-1):
            if order[i+1] not in graph or order[i] not in graph[order[i+1]]:
                self.flag = False
                break
        return self.flag and order == org
    
    def dfs(self, cur, graph, visit, order):
        if cur not in graph:
            visit[cur] = 2
            order.append(cur)
            return
        for c in graph[cur]:
            if visit[c] == 0:
                visit[c] = 1
                self.dfs(c, graph, visit, order)
            if visit[c] == 1:
                self.flag = False
                return
        visit[cur] = 2
        order.append(cur)
        
            
        """
        :type org: List[int]
        :type seqs: List[List[int]]
        :rtype: bool
        """
        