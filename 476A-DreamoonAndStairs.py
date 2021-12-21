n, m = map(int, input().split())
count = 0
step = 0
steps = []

while step < n:
    if n - step == 1:
        step += 1
        count += 1
        steps.append(1)
        break
    else:
        step += 2
        count += 1
        steps.append(2)


if count % m == 0:
    print(count)
# elif(m>count)
else:
    temp = count + m
    temp -= count % m
    if temp <= n:
        print(temp)
    else:
        print(-1)

# print(steps)