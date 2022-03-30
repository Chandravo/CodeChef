t=int(input())
res=[]
d={0:0,1:9,2:8,3:7,4:6,5:5,6:4,7:3,8:2,9:1}
for i in range(t):
    n,k=map(int,input().split())
    s=input()
    sum,i=0,0
    trail0=0
    j=-1
    while (int(s[j])==0):
        trail0+=1
        j+=1
    while (sum<=k and i<n):
        sum+=d[int(s[i])]
        i+=1;
    if (i+trail0-1==n):
        res+=[i]
    else:
        res+=[i-1]
for i in res:
    print(i)
    
        
    