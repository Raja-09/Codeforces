n,m=map(int,input().split())
l=[]
a=input().split()
for i in a:
    i=int(i)
    l.append(i)

cost=l[0]-1

for i in range(m-1):
    if(l[i]>l[i+1]):
        cost+=n-(l[i]-l[i+1])
    else:
        cost+=l[i+1]-l[i]

print(cost)