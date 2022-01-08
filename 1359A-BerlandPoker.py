
for _ in range(int(input())):
    n,m,k=map(int,input().split())
    x=n/k
    # print(x)
    if n/k<m:
        #in this case the jokers are more
        remjoker=m-(n/k)
        # print(remjoker)
        #now distribute the remainging jokers among the rest(k-1)
        dist=remjoker/(k-1)
        if(dist!=int(dist)):
            dist = int(dist) +1 
        else:
            dist = int(dist)
        y = dist
        # print(dist)
        
        
    else:
        #in this case all the jokers are taken by one player
        x=m
        y=0
    print(int(x-y))

    