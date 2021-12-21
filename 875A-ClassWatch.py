n = int(input())
count = 0
ans = []
for i in range(max(n - 100, 1), n):
    i = str(i)
    sum = int(i)
    for j in i:
        sum += int(j)
    if sum == n:
        ans.append(int(i))
        count += 1

print(count)
for i in ans:
    print(i)
