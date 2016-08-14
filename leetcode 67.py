class Solution(object):
    def addBinary(self, a, b):
        da=int(a,base=2)
        db=int(b,base=2)
        dan=da+db
        return bin(dan)[2:]
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        