t=int(input())
for _ in range(t):
    n,k=map(int,input().split())
    count=0
    count=0
    i=0
    while(i<k):
        count+=1
        if count%n!=0:
            i+=1
        print(count)
    # print(count)