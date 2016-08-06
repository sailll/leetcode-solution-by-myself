class Solution(object):
    def myAtoi(self, str):
        str2=str.lstrip()
        l=len(str2)
        s=""
        if(str2.startswith("-")):
            b=1
        else: b=0
        if(l>=2 and (str2.startswith("+") or str2.startswith("-"))):
            s2=str2[1:]
        else:
            s2=str2
        for i in s2:
            if((i<'0' or i>'9')):
                break
            if(i==' '):continue
            s+=i
        if(s==""):
            return 0
        a=int(s);
        if(b): a=-a
        max=2147483647
        if(a>max): a=max
        if(a<-max-1): a=-max-1
        return a
        """
        :type str: str
        :rtype: int
        """