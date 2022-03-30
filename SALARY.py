def check_same(l):
    t=l[0]
    ret=1
    for i in l:
        if i!=t:
            ret-=1
            break
    return ret
def func(l):
    h=1
    turns=0
    while(check_same(l)==0):
        turns+=1
        h=0
        maxe=l.index(max(l))
        for i in range (len(l)):
            if i!=maxe:
                l[i]+=1
    return turns
t=int(input())
res=[]
for i in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    res+=[func(l)]
for i in res:
    print(i)