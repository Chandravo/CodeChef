t=int(input())
res=[]
for i in range(t):
    n,m=map(int,input().split())
    done=list(map(int,input().split()))
    work=[]
    chef,asnt=[],[]
    for i in range(1,n+1):
        if i not in done:
           work=work+[i]
    for i in range(len(work)):
        if (i%2==0):
            #print(work[i],end=" ")
            chef=chef+[work[i]]
    #print()
    for i in range(len(work)):
        if (i%2!=0):
            #print(work[i],end=" ")
            asnt=asnt+[work[i]]
    res=res+[chef]+[asnt];
for i in res:
    for j in i:
        print(j,end=" ")    
    print()