n,m,a,b=map(int,input().split())

cost=0
t=0
while(t<n-m):
    if(m*a>=b):
        cost+=b
        t+=m
    else:
        cost+=a
        t+=1
    # print(t,cost)

diff=n-t

cost1=cost+b
cost2=cost+diff*a
cost=min(cost1,cost2)

print(cost)

# print(cost)
# print(t)
