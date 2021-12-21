n=int(input())
a=input().split()
for i in range(len(a)):
    a[i]=int(a[i])

m=int(input())
b=input().split()
for i in range(len(b)):
    b[i]=int(b[i])
count=0
a.sort()
b.sort()

gg=[]
wp=[]
for i in range(n):
    for j in range(m):
        if abs(a[i]-b[j])<=1:
            count+=1
            b[j]=-2
            gg.append(i)
            wp.append(j)
            break;
# print(gg)
# print(wp)
print(count)