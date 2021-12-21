n=int(input())
x=input().split()
y=input().split()

a=x[0]
b=y[0]
x.remove(a)
y.remove(b)

for i in range(len(x)):
    x[i]=int(x[i])
for i in range(len(y)):
    y[i]=int(y[i])

finish=bool
for i in range(1,n+1):
    if i not in x and i not in y:
        finish=False
    
if finish:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")