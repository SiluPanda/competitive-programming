def countB(s):
    n = len(s)
    l = [1]*n
    for i in range(n):
        if s[i] == '0':
            l[i] = -1
    print(l)
    prefix = [0] * (n+1)
    for i in range(1, n+1):
        prefix[i] = prefix[i-1] + l[i-1]
    F = {}
    print(prefix)
    for x in prefix:
        if x not in F.keys():
            F[x] = 1
        else:
            F[x] += 1
    ans = 0
    for k in F.keys():
        print(k, F[k])
        ans += (F[k] * (F[k]-1))//2
    return ans

s = input()
print(countB(s))