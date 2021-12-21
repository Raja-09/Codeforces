n=int(input())
index=[]
frnds=input().split()
for i in range(n):
    frnds[i]=int(frnds[i])

for i in range(n):
    inde=frnds.index(i+1)
    # print(ind)
    print(inde+1,end=" ")
