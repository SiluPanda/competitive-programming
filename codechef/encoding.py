import math

def enc(s):
    n = len(s)
    ans = 0
    itr = n-1
    while itr > 0:
        if s[itr] == s[itr-1]:
            itr -= 1
        else:
            ans += int(s[itr]) * math.pow(10, n-1-itr)
            itr -= 1
    ans += int(s[0]) * math.pow(10, n-1)
    return ans % 1000000007

tc = int(input())
for _ in range(tc):
    na1 = [int(s) for s in input().split()]
    nb1 = [int(s) for s in input().split()]
    n1 = na1[0]
    a = na1[1]
    n2 = nb1[0]
    b = nb1[1]
    ans = 0

    for ele in range(a, b+1):
        ans += enc(str(ele))
    print(int(ans))

