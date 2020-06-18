# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def helper(self, root_list,ans,flag):
        if len(root_list) == 0 or root_list[0] is None:
            return
        next_level = []
        cur_level_val = [x.val for x in root_list]
        ans.append(cur_level_val)
        if flag:
            for x in root_list[::-1]:
                if x.right is not None:
                    next_level.append(x.right)
                if x.left is not None:
                    next_level.append(x.left)
        else:
            for x in root_list[::-1]:
                if x.left is not None:
                    next_level.append(x.left)
                if x.right is not None:
                    next_level.append(x.right)
        self.helper(next_level, ans, not flag)
        
        
            
    def zigzagLevelOrder(self, root):
        ans = []
        self.helper([root],ans,True)
        return ans
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """