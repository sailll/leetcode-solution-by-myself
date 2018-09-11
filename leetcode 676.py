class MagicDictionary(object):

    def __init__(self):
        self.l = []
        """
        Initialize your data structure here.
        """
        

    def buildDict(self, dict):
        self.l = dict
        """
        Build a dictionary through a list of words
        :type dict: List[str]
        :rtype: void
        """
        

    def search(self, word):
        for i in self.l:
            if len(i) != len(word):
                continue
            dif = 0
            for j in range(len(word)):
                if i[j]==word[j]:
                    continue
                else:
                    dif += 1
                    if dif > 1:
                        break
            if dif == 1:
                return True
        return False
        """
        Returns if there is any word in the trie that equals to the given word after modifying exactly one character
        :type word: str
        :rtype: bool
        """