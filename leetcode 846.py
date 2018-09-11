import Queue
class Solution(object):
    def canVisitAllRooms(self, rooms):
        n = len(rooms)
        finish = []
        keys = Queue.Queue()
        keys.put(0)
        while(not keys.empty()):
            i = keys.get()
            if i in finish:
                continue
            finish.append(i)
            if len(finish)==n:
                return True
            for r in rooms[i]:
                keys.put(r)
        return False