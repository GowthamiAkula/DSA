class Solution(object):
    def countConsistentStrings(self, allowed, words):
        """
        :type allowed: str
        :type words: List[str]
        :rtype: int
        """
        cnt = 0
        allowed_set = set(allowed)
        for i in words:
            if all(char in allowed_set for char in i):
                cnt +=1
        return cnt