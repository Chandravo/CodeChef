t=int(input())
res=[]
for q in range(t):
    n,k=map(int,input().split())
    a,b=[],[]
    for i in range(1,n+1):
        a+=[i]
        b+=[n+1-i]
    ans=[]
    if k==1 and n!=1:
        res+=[[-1]]
    else:
        for i in range(k-1):
            ans+=[a[i]]
        for j in range(n-k+1):
            ans+=[b[j]]
        res+=[ans]
for i in res:
    for j in i:
        print(j,end=" ")
    print()