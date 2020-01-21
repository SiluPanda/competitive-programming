import math

tt = int(input())
for _ in range(tt):
    inp = [int(s) for s in input().split()]
    l, r = inp[0], inp[1]
    p = int(math.log2(l))
    start = 1<<p
    end = 1<<(p+1)
    if start < l:
        print(0)
    else:
        ans = 0
        ans += start * (min(end, r+1)-l)
        print(ans)
       

    