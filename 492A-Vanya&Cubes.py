def sumofn(n):
    sum=0
    for i in range(n+1):
        sum+=i
    
    return sum;

cubes=[]
n=int(input())
count=0
ans=0
for i in range(40):
    ans+=sumofn(i)
    cubes.append(ans)

for i in range(len(cubes)):
    if cubes[i]<=n and cubes[i+1]>n:
        print(i)


