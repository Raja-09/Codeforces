n,a,b=map(int,input().split())
count=0
for i in range(a+1,n+1):
    if(i+b>=n):
        # print(i)
        count+=1
print(count)