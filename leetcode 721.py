par = {}
ranking = {}

def init(l):
    for i in l:
        par[i] = i
        ranking[i] = 0

def find(x):
    if x==par[x]:
        return x
    par[x] = find(par[x])
    return par[x]

def same(x,y):
    if find(x)==find(y):
        return True
    return False

def unite(x,y):
    x = find(x)
    y = find(y)
    if(ranking[x]<ranking[y]):
        par[x] = y
    else:
        par[y] = x
        if(ranking[x]==ranking[y]):
            ranking[x]+=1

class Solution(object):
    def accountsMerge(self, accounts):
        ac_dict = {}
        ans = []
        for account in accounts:
            if account[0] in ac_dict:
                ac_dict[account[0]].append(account[1:])
            else:
                ac_dict[account[0]] = [account[1:]]
        for k,v in ac_dict.items():
            s = set()
            for cur in v:
                for cm in cur:
                    s.add(cm)
            s = list(s)
            init(s)
            for cur in v:
                for i in range(len(cur)-1):
                    if not same(cur[i],cur[i+1]):
                        unite(cur[i],cur[i+1])
            bucket = {}
            for cur in s:
                par[cur] = find(cur)
                if par[cur] in bucket:
                    bucket[par[cur]].append(cur)
                else:
                    bucket[par[cur]] = [cur]
            for mail in bucket.values():
                mail = sorted(mail)
                a = [k]
                for m in mail:
                    a.append(m)
                ans.append(a)
        return ans
                
        
            
        """
        :type accounts: List[List[str]]
        :rtype: List[List[str]]
        """
        