t=int(input())
ress=[]
for i in range(t):
    j=input()
    s=input()
    res=0
    q=''
    for q in s:
        if (q in j):
            res+=1
    ress+=[res]
for w in ress:
    print(w)
        
    
    