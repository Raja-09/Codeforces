n,m=map(int,input().split())
words1=[]
words2=[]

ans=[]
for i in range(m):
    a,b=input().split()
    words1.append(a)
    words2.append(b)

lect=input().split()

for i in lect:
    k=words1.index(i)
    if(len(words1[k])>len(words2[k])):
        ans.append(words2[k])
    else:
        ans.append(words1[k])



# print(words1)
# print(words2)
# print(lect)
for i in ans:
    print(i,end=" ")
