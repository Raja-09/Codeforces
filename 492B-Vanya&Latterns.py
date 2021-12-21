n,l=map(int,input().split())
 
a=input().split()
 
for i in range(len(a)):
    a[i]=int(a[i])
a.sort()
maxi=-1
 
for i in range(len(a)-1):
    diff=a[i+1]-a[i]
    if(diff>maxi):
        maxi=diff
 

first=a[0]
last=l-a[n-1]
print(max(maxi/2,max(first,last)))