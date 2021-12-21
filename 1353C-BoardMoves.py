t=int(input())
for _ in range(t):
    n=int(input())
    cost=0
    for i in range(1,n):
        if(i<=n//2):
            cost+=8*i*i
            # print(cost)
    print(cost)
