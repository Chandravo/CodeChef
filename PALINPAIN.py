t=int(input())
res=[]
for i in range (t):
    x,y=map(int,input().split())
    if (y%2!=0 and x%2!=0) or ((x+y)<=3) or (x<2 or y<2):
        res=res+['-1']
    else:
        q=""
        w=""
        if (x%2==0 and y%2==0):
            for i in range(x//2):
                q=q+"a"
            for i in range(y//2):
                q=q+"b"
            net1=q+q[::-1]
            net2=q[::-1]+q
            res=res+[net1]
            res=res+[net2]
        else:
            net=""
            for i in range(x//2):
                q=q+"a"
            for i in range(y//2):
                q=q+"b"
            net=q
            if (x%2==0):
                net=net+"b"
            else:
                net=net+"a"
            net=net+q[::-1]
        
for i in res:
    print(i)
            
            
            
        
    