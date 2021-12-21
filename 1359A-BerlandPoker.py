t=int(input())
for _ in range(t):
    n,m,k=map(int,input().split())
    x=n/k
    print("This is the cards that the first player gets",x)
    if n/k<m:
        #in this case the jokers are more
        remjoker=m-(n/k)
        print("The left oiut jokers:",remjoker)
        #now distribute the remainging jokers among the rest(k-1)
        dist=remjoker/(k-1)
        print("This is the number of cards the rest players get",dist)
        
    else:
        #in this case all the jokers are taken by one player
        x=m
        y=0
    print(x-y)
    print()

    