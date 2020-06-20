# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def dfs(self, root, par):
        if root is None:
            return
        root.par = par
        self.dfs(root.left, root)
        self.dfs(root.right, root)
             
    def distanceK(self, root, target, K):
        if root is None:
            return None
        self.dfs(root, None)
        visit = {}
        q = [target]
        for i in range(K):
            nq = []
            for c in q:
                visit[c.val] = 0
                nq += [c.par, c.left, c.right]
            nq = [x for x in nq if x is not None and x.val not in visit]
            q = nq
        return [x.val for x in q]
