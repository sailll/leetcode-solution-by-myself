class Solution(object):
    visit = []
    def helper(self, grid, x, y, direction):
        if x >= len(grid) or y >= len(grid[0]) or y < 0 or x < 0 or self.visit[x][y]:
            return False
        self.visit[x][y] = 1
        if grid[x][y] == 1 and (direction == 'r' or direction == 'l'):
            if x == len(grid)-1 and y == len(grid[0])-1:
                return True
            if direction == 'r':
                return self.helper(grid, x, y+1,'r')
            else:
                return self.helper(grid, x, y-1,'l')
        if grid[x][y] == 2 and (direction == 'u' or direction == 'd'):
            if x == len(grid)-1 and y == len(grid[0])-1:
                return True
            if direction == 'u':
                return self.helper(grid, x-1, y,'u')
            else:
                return self.helper(grid, x+1, y,'d')
        if grid[x][y] == 3 and (direction == 'r' or direction == 'u'):
            if x == len(grid)-1 and y == len(grid[0])-1:
                return True
            if direction == 'r':
                return self.helper(grid, x+1, y,'d')
            else:
                return self.helper(grid, x, y-1,'l')
        if grid[x][y] == 4 and (direction == 'u' or direction == 'l'):
            if x == len(grid)-1 and y == len(grid[0])-1:
                return True
            if direction == 'u':
                return self.helper(grid, x, y+1,'r')
            else:
                return self.helper(grid, x+1, y,'d')
        if grid[x][y] == 5 and (direction == 'r' or direction == 'd'):
            if x == len(grid)-1 and y == len(grid[0])-1:
                return True
            if direction == 'r':
                return self.helper(grid, x-1, y,'u')
            else:
                return self.helper(grid, x, y-1,'l')
        if grid[x][y] == 6 and (direction == 'd' or direction == 'l'):
            if x == len(grid)-1 and y == len(grid[0])-1:
                return True
            if direction == 'd':
                return self.helper(grid, x, y+1,'r')
            else:
                return self.helper(grid, x-1,y,'u')
        return False
        
    def hasValidPath(self, grid):
        m = len(grid)
        n = len(grid[0])
        if m == 1 and n == 1:
            return True
        self.visit = []
        for i in range(m):
            cur = [0] * n
            self.visit.append(cur)
        ans1 = self.helper(grid,0,1,'r') 
        self.visit = []
        for i in range(m):
            cur = [0] * n
            self.visit.append(cur)
        ans2 = self.helper(grid,1,0,'d')
        return ans1 or ans2
        """
        :type grid: List[List[int]]
        :rtype: bool
        """
        
