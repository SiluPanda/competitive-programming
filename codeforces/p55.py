n = int(input())
d = {}
arr = []
for _ in range(n):
    x,y = input().split()
    x,y = int(x), int(y)
    arr.append(x)
    if y in d:
        d[y]+=1
    else:
        d[y] = 1
ans = 0
for x in arr:
    if x in d:
        ans += d[x]
print(ans)