def fun(l,n):
    l.sort()
    return(l.index(n))
t=int(input())
res=[]
for i in range (t):
    x=int(input())
    l=list(map(int,input().split()))
    ind=int(input())
    n=l[ind-1]
    res=res+[fun(l,n)]
for i in res:
    print(i+1)