n=int(input())
a=list(map(int,input().split()))
# print(a)

dp=[]
for i in range(n+1):
    temp=[]
    for j in range(n+1):
        temp.append(0)
    dp.append(temp)

for i in range(n+1):
    for j in range(n+1):
        