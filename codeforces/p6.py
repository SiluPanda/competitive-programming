t = int(input())
ans = 0
for _ in range(t):
    l = [int(s) for s in input().split()]
    ans += (sum(l) >= 2)
print(ans)
    